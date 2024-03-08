-- dorepeat procedure registration
USE `madangdb`;
DROP procedure IF EXISTS `dorepeat1`;

USE `madangdb`;
DROP procedure IF EXISTS `madangdb`.`dorepeat1`;


DELIMITER $$
USE `madangdb`$$
CREATE DEFINER=`root`@`localhost` PROCEDURE `dorepeat1`(p1 int)
begin
	set @x= 0;
    repeat 
		set @x=@x+1;
	until @x > p1
    end repeat;
end$$

DELIMITER ;
;
-- dorepeat registraion end

call dorepeat(100);
select @x;


-- insertbook procedure registration
USE `madangdb`;
DROP procedure IF EXISTS `insertbook`;

DELIMITER $$
USE `madangdb`$$
CREATE PROCEDURE `insertbook` (
	in mybookid integer,
    in mybookname varchar(40),
    in mypublisher varchar(40),
    in myprice integer)
BEGIN
	insert into Book(bookid, bookname, publisher, price) 
		values(mybookid, mybookname, mypublisher, myprice);
END$$

DELIMITER ;

-- registraion end

call insertbook(13, '스포츠과학', '마당과학서적', 25000);
select * from Book;


-- BookInsertOrUpdate procedure registration
USE `madangdb`;
DROP procedure IF EXISTS `BookInsertOrUpdate`;

DELIMITER $$
USE `madangdb`$$
CREATE PROCEDURE BookInsertOrUpdate(
	mybookid integer,
    mybookname varchar(40),
    mypublisher varchar(40),
    myprice integer)
BEGIN
	declare mycount integer;
    select count(*) into mycount from Book
		where bookname like mybookname;
	if mycount != 0 then
		set sql_safe_updates=0;
        update Book set price = myprice
			where bookname like mybookname;
	else
		insert into Book(bookid, bookname, publisher, price) 
		values(mybookid, mybookname, mypublisher, myprice);
	end if;
END$$

DELIMITER ;
-- BookInsertOrUpdate procedure registration end
select * from Book;
call BookInsertOrUpdate(15, '스포츠 즐거움', '마당과학서적', 25000);
call BookInsertOrUpdate(16, '스포츠 즐거움', '마당과학서적', 30000);

-- AveragePrice procefure resigtration
USE `madangdb`;
DROP procedure IF EXISTS `AveragePrice`;

DELIMITER $$
USE `madangdb`$$
CREATE PROCEDURE AveragePrice(
	out AverageVal integer)
BEGIN
	select avg(price) into AverageVal
    from Book where price is not null;
END$$

DELIMITER ;
-- AveragePrice procefure resigtration end
call AveragePrice(@myprice);
select @myprice;



CREATE PROCEDURE interest()
BEGIN
	declare myinterest integer default 0.0;
    declare price integer;
    declare endOfRow boolean default false;
    declare interestCursor cursor for
			select saleprice from Orders;
	declare countinue handler
		for not found set endOfRow=True;
	open interestCursorl
    cursor_loop: LOOP
		fetch interestCurdor into price;
        if endOfRow then leave cursor_loop;
        end if;
        if price >= 30000 then
			set myinterest = myinterest + price * 0.1;
		else
			set myinterest = myinterest + price * 0.05;
		end if;
	end loop cursor_loop;
    close interestCursor;
    select concat('전체 이익 금액 =', myinterest);
END;
//
delimiter;