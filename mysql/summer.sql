use madangdb;
create table Summer(
	sid int primary key,
    class varchar(40),
	price int);
    
insert into Summer values(1, 'JAVA', 20000);
insert into Summer values(2, 'PYTHON', 15000);
insert into Summer values(3, 'C', 10000);
insert into Summer values(4, 'JAVA', 20000);

select * from Summer;

-- 7-1 example
-- c class의 가격
select price 'C 수강료'
from summer
where class LIKE 'C';
/* C 강좌 수강료를 조회하면 10,000원으로 나온다 */
delete from Summer where sid=200;

-- 7-2 example
-- C++ 강좌개설
insert into Summer values (NULL, 'C++', 25000);

-- 수강인원
select count(*) from Summer;

-- 7-3 example
set sql_safe_updates=0;
update Summer set price=15000 where class like 'JAVA' and sid = 250;
select * from Summer;

create table SummerPrice(
	class varchar(20),
    price integer);
create table SummerEnroll(
	sid integer,
    class varchar(20));
    
insert into Summerprice values ('JAVA', 20000);
insert into Summerprice values ('python', 25000);
insert into Summerprice values ('C', 10000);

insert into SummerEnroll values (100, 'JAVA');
insert into SummerEnroll values (150, 'Python');
insert into SummerEnroll values (200, 'C');
insert into SummerEnroll values (200, 'JAVA');

select * from SummerPrice;
select * from SummerEnroll;	
-- 이 테이블의 결과는 테이블을 나누어서 써야게구나 하는 나눔관리


-- 7-4 example
select price as ' C Class의 기적'
from SummerPrice
where class like 'C';

delete from SummerEnroll where sid=200;
select * from SummerEnroll;

-- 7-5 example
insert into SummerPrice values ('C++', 25000);
select count(*) from SummerEnroll;

-- 7-6 example 수정이상
update SummerPrice set price=15000 where class like 'JAVA';
select price as 'JAVA class의 가격'
from SummerPrice
where class like 'JAVA';
