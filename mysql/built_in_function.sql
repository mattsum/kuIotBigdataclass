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