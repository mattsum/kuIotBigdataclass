USE madangdb;

CREATE VIEW vw_Book
AS	SELECT *
	FROM Book
    WHERE bookname LIKE "%축구%";
    
SELECT * FROM vw_Book;

-- 4-20 example
CREATE VIEW vw_Customer
AS	SELECT *
	FROM Customer
    WHERE address LIKE "%대한민국%";
    
SELECT * FROM vw_Customer;

-- 4-21 example
CREATE VIEW vw_Orders (orderid, custid, name, bookid, bookname, saleprice, orderdate)
AS SELECT	od.orderid, od.custid, cs.name, od.bookid, bk.bookname, od.saleprice, od.orderdate
FROM		Orders od, Customer cs, Book bk
WHERE		od.custid=cs.custid AND od.bookid=bk.bookid;

SELECT orderid, bookname, saleprice 
FROM vw_Orders 
WHERE name='김연아';


-- 4-22 example
create view vw_Customer
as select * from customer where address like "%대한민국%";

select * from vw_Customer;
create or replace view vw_Customer(custid, name, address)
as seLect custid, name, address
	from Customer
    where address like "%영국%";
    
-- 4-23 example
select * from vw_Customer;
select * from Customer;

drop view vw_Customer;
insert into vw_Customer value(6, "강민우", "영국 계룡");
insert into Customer value(7, "박정석", "영국 대전", "000-000-0101");
