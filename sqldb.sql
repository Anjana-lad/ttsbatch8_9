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
select * from emp_details where salary>=30000 and city="surat" ;
select * from emp_details where joint_dt >"2006-02-01";
-- alter table 
alter table employee add column dob date;
alter table employee drop column age;

-- backup import /export database
-- C:\WINDOWS\system32>mysqldump -u root -p batch8_10 >G:\ttsbatch8_9\backup.sql
-- Enter password: ****

-- C:\WINDOWS\system32>mysql -u root -p ttsbatch8_9 <G:\ttsbatch8_9\backup.sql
-- Enter password: ****
-- group by

-- inner join:
-- syntax:
-- select column_name from table1(primary key) inner join table2(foreign key) where table1.primary key col =table2.foreign key col;
select stname,marks,course_name from student inner join course where student.rollno=course.rollno;

-- left join
-- syntax: select column_name from table1(PK) left join table2(FK) where table1.col=table2.col;
select stname,marks,course_name from student left join course on student.rollno=course.rollno;

-- right join
-- syntax: select column_name from table1(PK) right join table2(FK) where table1.col=table2.col;
select stname,marks,course_name from student right join course on student.rollno=course.rollno;

-- full outer join
select stname,marks,course_name from student left join course on student.rollno=course.rollno
union
select stname,marks,course_name from student right join course on student.rollno=course.rollno;

-- self join
-- syntax : select col as name ,col_name from table1 t1,table t2 where table1.col=table2.col;

select course_name,stname,city,marks from student s,course c where s.rollno=c.rollno;
select c.course_name as course_nm,s.stname as stud_name,s.city,s.marks as score from student s,course c where s.rollno=c.rollno;

--  cross join
-- syntax :
select * from  student cross join  course;

-- function 1:
delimiter //
create function cub_fun(num int) returns int deterministic
begin
	declare total int;
    set total=num*num*num;
    return total;
end //
delimiter ;
-- calling function
select cub_fun(7) as cube_number;

-- function 2;
delimiter //
create function getdob(emp_name varchar(20)) returns date deterministic
begin
	 declare dateOfBirth DATE;
      select dob into dateOfBirth from employee where ename=emp_name; 
         return dateOfBirth;
end //
delimiter ;
-- call function
select getdob("riya");

-- drop function getdob;
-- function 3 to get age from date of birth
delimiter //
create function getage(dob1 date) returns int deterministic
begin 
	declare age int;
    declare y int;
    select curdate() into age from employee where dob1=dob;
    set y= year(curdate())-year(dob1);
    return y;
end // 
delimiter ;
drop function getage;
select getage("1992-02-28");
-- procedure syntax:
-- DELIMITER //
-- CREATE PROCEDURE procedure_name ( [IN|OUT|INOUT] parameter_name parameter_datatype)
-- BEGIN
    -- SQL statements to be executed
-- END //
-- DELIMITER;
 -- To run procedure : call procedure_name(parameter);

-- procedure without parameter.
delimiter $$
create procedure p1()
begin
	select * from course;
end $$
delimiter ;

-- call procedure 
call p1();

-- procedure with in parameter.
DELIMITER //
CREATE PROCEDURE get_name_sal (in empid int)
BEGIN
		select ename,salary from employee where empid=eid;
END //
DELIMITER ;
call get_name_sal(4);

-- procedure with in and out parameter.
DELIMITER //
CREATE PROCEDURE getname (in empid int ,out emp_name varchar(25),out mob varchar(20))
BEGIN
    select ename as emp_name ,mob_no as mobile_no from employee where empid=eid;
    END //
DELIMITER ;

drop procedure getname;

call getname(3,@emp_name,@mob);

-- procedure with in and inout parameter.
delimiter //
create procedure p3 (in emp_id int ,inout emp_salary int)
begin
	select salary into emp_salary from employee where emp_id=eid;
    set emp_salary=emp_salary +200;
    update employee set salary=emp_salary where emp_id=eid;
end //
delimiter ;
 -- drop procedure p3;
call p3(4,@emp_salary);
select @emp_salary as salary;

-- trigger syntax:
-- delimiter //
-- create trigger triggername
-- after/before insert /update/delete 
-- on tablename for each row 
-- begin 
	-- dml statements;
-- end //
-- delimiter ;

-- trigger to set on insert where new city if added surat should be update to local
delimiter //
create trigger update_city
before insert on student for each row 
begin
	if new.city="surat" then set new.city="Local";
    end if;
end //
delimiter ;

insert into student (rollno,stname,mobile_no,city,marks) 
values(1,"Manoj","74258963","Surat",85),(2,"Paras","854129632","Valsad",96),(3,"Rohit","852147963","Navsari",74);

create table stud_back (rollno int , stname  varchar(255),marks int);

 -- trigger to add data into new table
 delimiter //
 create trigger add_new
 after insert on student for each row
 begin 
	insert into stud_back(rollno,stname,marks)values(new.rollno,new.stname,new.marks);
 end //
 delimiter ;
insert into student (rollno,stname,mobile_no,city,marks) 
values(4,"Riya","7425896743","Vapi",75);





