use madangdb;

-- 4-1 example
select abs(-78), abs(+78);
-- 4-2 example
select round(4.875, 1);
-- 4-3 example
select custid '고객번호', round(sum(saleprice)/count(*), -2) '평균금액'
from Orders
group by custid;
-- 4-4 example
select bookid, bookname, publisher, price from Book;
select bookid, replace(bookname, '야구', '농구') bookname, publisher, price from Book;
-- 4-5 example
select 	bookname '제목', char_length(bookname) '문자수', length(bookname) '바이트수'
from 	Book
where 	publisher like '굿스포츠';
-- 4-6 example
select substr(name, 1, 1) '성', count(*) '인원' 
from Customer group by substr(name, 1, 1);
select 	adddate('2024-07-01', interval -5 Day) befores,				-- 날짜형데이터 - + 계산할수있다. 
		adddate('2024-07-01', interval 5 Day) afters;
-- 4-7 example
select 	orderid '주문번호', orderdate '주문일',
		adddate(orderdate, interval 10 day) '확정' from Orders;
select sysdate(), date_format(sysdate(),'%Y%m%d:%H%i%s');
-- 4-8 example
select 	orderid '주문번호', date_format(orderdate, '%Y-%m-%d') '주문일',
		custid '고객번호', bookid '도서번호' from Orders
        where orderdate= STR_TO_DATE('20240707', '%Y%m%d');
-- 4-9 example
select 	sysdate(),
		date_format(sysdate(), '%Y/%m/%d %a %h:%i') 'sysdate_1';
        
use madangdb;
create table Mybook(
	bookid int primary key,
    price int);
insert into Mybook(bookid, price) value (1, 10000);
insert into Mybook(bookid, price) value (2, 20000);
insert into Mybook(bookid, price) value (3, null);

select price + 100 from Mybook where bookid=3;
select sum(price), avg(price), count(*), count(price), count(bookid)
from Mybook;

-- 4-10 example
select name 이름, ifnull(phone, '연락처없음' ) 전화번호
from Customer;

-- 4-11 example
set @seq:=0;

select (@seq:=@seq+1) 순번, custid, name, phone
from Customer
where @seq < 2;

-- 4-12 example
select orderid, saleprice, (select avg(saleprice) from Orders), 200 테스트
from Orders
where saleprice <= (select avg(saleprice)
					from Orders);

-- 4-13 example 
select orderid, custid, saleprice
from Orders od1
where saleprice > (	select avg(saleprice)
					from Orders od2
					where od1.custid=od2.custid);

-- 4-14 example
select sum(saleprice) total
from Orders
where custid in (	select custid
					from Customer
					where address like "%대한민국%");

-- 4-15 example 
select orderid, saleprice
from Orders
where saleprice > all (select saleprice
						from Orders
                        where custid = 3);

select sum(saleprice) total
from Orders od
where exists (select *
				from Customer cs
                where address like "%대한민국%" and cs.custid=od.custid);

-- 4-17 example
select (select name
		from Customer cs
        where cs.custid=od.custid) name, sum(saleprice) total
from Orders od
group by od.custid;

alter table Orders add bname varchar(40);
select * from Orders;

update Orders
set bname = (	select bookname 
				from Book
                where Book.bookid = Orders.bookid);

-- 4-19 example
select cs.name, sum(saleprice)
from (	select custid, name
		from Customer
        where custid <= 2) cs, Orders
where cs.custid = Orders.custid
group by cs.name;