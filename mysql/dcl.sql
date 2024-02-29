use madangdb;
select * from Book;
-- 3-44, 45 Newbook example [INSERT]
insert into 	Book(bookid, bookname, publisher, price)
		value (11, "스포츠 의학", "한솔의학서적", 90000);
	insert into 	Book
        value (12, "스포츠 의학", "한솔의학서적", 90000);
	insert into 	Book(bookid, bookname, price, publisher)
        value (13, "스포츠 의학", 90000, "한솔의학서적");
	insert into 	Book(bookid, bookname, publisher)
        value (14, "스포츠 의학", "한솔의학서적");
-- 3-46 Newbook example
create table imported book(
	bookid 		integer primary key,
    bookname 	varchar(20)
    publisher 	varchar(20)
	price 		integer;
        
	select * from Imported_book;
    insert	into Imported_book(bookid,bookname, price, publisher)
			select bookid, bookname, price, publisher
            from Book;
            
-- 3-47 Newbook example [UPDATE]
set SQL_SAFE_UPDATES=0;
select * from Customer;
update Customer Set address = '대한민국 부산' where custid=5;

-- 3-48 Newbook example
select * from Book;
update 	Book 
set 	publisher = (	select publisher 
						from imported_book 
						where bookid = 10)
where bookid = 14;

-- 3-49 Newbook example [DELETE]
delete from book where bookid > 10;
select * from Book;

select * from Customer;
-- 3-50 Newbook example [DELETE]
DELETE FROM CUSTOMER;