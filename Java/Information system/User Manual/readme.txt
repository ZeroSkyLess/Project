1) go to your mysql workbench file there to open cmd.

2) type  mysql -uroot -p   in the command prompt.Then, it will ask u to write your password, please enter the password of mysql workbench.

3) if you notice that the cmd is start with mysql, then you were succesful connect your cmd to your mysql workbench.if no, please try again from step 1.

4) type   use mysql;     , after you type, it will show Database changed,then go to next step.

5) type    create user 'your database name'@'localhost' identified by 'password of your database';

my example is    create user 'sky'@'localhost' identified by '1234';

so sky will be my user name and 1234 is my password for the sky user.

6) to grant the privileges, type
grant select, insert, update, delete, create, create view, drop, execute, references on *.* to 'sky'@'localhost';

7) if you want to enable remote access of the account from any IP address, please type
grant all privileges on *.* to 'sky'@'%' identified by '1234';

if you want to restrict the account's remote access to just one particular IP address, please type
grant all privileges on *.* to 'sky'@'ipAddress' identified by '1234';

8) type     exit;


9) type    mysql -usky -p1234


10) to create a database from this user, you can type create database databasename;
my example is     create database oop;

11) type  use oop;

12) source script.sql;

13) you can start to create the database, you can create through text file (please save as .sql) or simply type in command prompt

14)Creating tables by queries
    create table employee (
 fullName   varchar(25)  not null,
 age        integer(3),
 ic         integer(15)  not null,
 id         integer(10),
 noTel      integer(15),
 department varchar(15),
 position   varchar(10),
 password   varchar(20),
 
 primary key (id)
);

create table company (
 companyName        varchar(20) not null,
 registerCode       integer(20),
 yearOfEstablished  integer(4),

);

create table salary (
 id              integer(10),
 salary          number(9,2),
 bonus           integer(2),
 allowance       integer(2),

 foreign key (id) references Staff(id)

);

15) End...
   










