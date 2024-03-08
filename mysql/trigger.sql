set global log_bin_trust_function_creators=on;
create table Book_log(
	bookid integer primary key,
    bookname varchar(40),
    publisher varchar(40),
    price integer);
    
-- book_after_insert trigger registration start
DROP TRIGGER IF EXISTS `madangdb`.`Book_AFTER_INSERT`;

DELIMITER $$
USE `madangdb`$$
CREATE DEFINER = CURRENT_USER TRIGGER `madangdb`.`Book_AFTER_INSERT` AFTER INSERT ON `Book` FOR EACH ROW
BEGIN
    insert into Book_log values(new.bookid, new.bookname, new.publisher, new.price);
END$$
DELIMITER ;
-- book_after_insert trigger registration end

select * from Book;
select * from Book_log;
insert into Book values(14, '스포츠 과학1', '이상미디어', 25000);

USE `madangdb`;
DROP function IF EXISTS `fnc_Interest`;

DELIMITER $$
USE `madangdb`$$
CREATE FUNCTION fnc_Interest(price integer)
RETURNS INTEGER
BEGIN
	declare myinterest integer;
    if price >= 30000 then 
		set myinterest = price * 0.1;
        else set myinterest = price * 0.05;
	end if;
RETURN myinterest;
END;$$

DELIMITER ;

select custid, orderid, saleprice, fnc_interest(saleprice) as 'interest'
from Orders;
