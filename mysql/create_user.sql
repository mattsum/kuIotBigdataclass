create database madangdb;
create user madang@localhost identified by 'madang';
grant all privileges on madangdb.* to madang@localhost;
commit;
