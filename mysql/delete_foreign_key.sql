use madangdb;

set sql_safe_updates=0;
-- 무시하고 삭제

SET foreign_key_checks = 0;
delete from Customer;
SET foreign_key_checks = 1;


-- 제약 조건 확인
select * from information_schema.table_constraints where table_name = 'Orders';

-- 확인된 제약 조건으로 외래키 삭제
alter table Orders drop foreign key Orders_ibfk_2;

-- 제약 조건의 이름을 지정하기
alter table Orders add constraint aa foreign key(custid) references Customers(custid);

-- 제약 조건을 확인 한뒤 delete 로 삭제 하기.
set SQL_safe_updates=0;

delete from Customer;