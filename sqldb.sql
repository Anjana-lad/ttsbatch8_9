show databases;
use ttsbatch8_9;
show tables;
insert into employee values(5,"Riya",30,"2021-02-15",35000,"741258963");
rename table employee to Emp_details;
select * from  Emp_details;
 alter table Emp_details add column city varchar(20);
 update emp_details set city="surat" where eid=1;
 update emp_details set city="valsad" where eid=2;
update emp_details set city="Vapi" where eid=3;
 update emp_details set city="surat" where eid=4;
 update emp_details set city="kim" where eid=5;
select * from emp_details where name='raj';
select * from emp_details where city='surat';
select name,salary,city from emp_details where city='surat';
select name,salary from emp_details where salary>30000;
select name,salary from emp_details where salary<30000;
select name,salary from emp_details where salary<=35000;
select name,salary from emp_details where salary>=40000;
select * from emp_details where salary>=30000 and city="surat";
select * from emp_details where salary<30000 and city="surat";
create table department (dept_id int primary key,dept_name varchar(20) not null,emp_id int, foreign key(emp_id) references emp_details(eid));
insert into department values(1,"Services",1),(2,"Networking",3),(3,"Finance",5);
select * from department;
-- alisis
select name as emp_name from emp_details where eid =2;
-- distinct
select distinct city from emp_details;
 -- limit 
 select * from emp_details limit 3;
 -- offset 
 select * from emp_details limit 2 offset 2;
 -- like wild cards %, _
 select * from emp_details where name like 'a%';
select * from emp_details where name like '%a';
select * from emp_details where name like '%a%';
select * from emp_details where name like '_i_%';
select * from emp_details where city like '_u%';
-- aggrate  function : count,sum ,avg,min,max
select count(name)  as total_record from emp_details;
select max(salary) as maximum_salary from emp_details;
select min(age) from emp_details;
select avg(salary) from emp_details;
select sum(salary) from emp_details;
-- order by ascending or descending
select * from emp_details order by city asc;
select * from emp_details order by salary desc;

-- and or not 
select * from emp_details where not salary<=30000 and city="surat" ;
select * from emp_details where joint_dt >"2006-02-01";

-- in 


