use madangdb;
-- 3-34 NewBook example
create table NewBook(
	bookid		integer,
	bookname 	varchar(20),
    publisher	varchar(20),
    price		integer);
drop table NewBook;
create table NewBook(
	bookid		integer primary key,
	bookname 	varchar(20) not null,
    publisher	varchar(20) unique,
    price		integer default 10000 check(price >= 1000)
    );
drop table NewBook;
create table NewBook(
	bookid		integer,
	bookname 	varchar(20) not null,
    publisher	varchar(20) unique,
    price		integer default 10000 check(price >= 1000),
    primary key (bookname, publisher)
);
-- 3-35 Newbook example
create table NewCustomer(
	custid	integer	primary key,
    name	varchar(40),
    address	varchar(40),
    phone	varchar(30)
    );
-- 3-36 Newbook example
create table NewOrders(
	orderid 	integer,
    custid 		integer	not null,
    bookid 		integer	not null,
    saleprice 	integer,
    orderdate 	date,
    primary key(orderid),
    foreign key(custid) references newcustomer(custid) on delete cascade
    );
-- 3-37 Newbook example
alter table NewBook Add isbn varchar(13);
-- 3-38 Newbook example
alter table NewBook modify isbn integer;
-- 3-39 Newbook example
alter table NewBook drop column isbn;
-- 3-40 Newbook example
alter table NewBook modify bookname varchar(20) not null;
-- 3-41 Newbook example
alter table NewBook add primary key(bookid);

alter table NewBook drop primary key;
