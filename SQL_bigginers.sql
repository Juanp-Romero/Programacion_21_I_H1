create database database_test;
use database_test;
create table People_subscibed(
ID int unsigned  auto_increment primary key,
Name varchar(511),
subscribed varchar(55)
);
#drop database database_test;
insert into People (Name, City, Age) values  ('Anna','Bucaramanga',15);
select * from People;
select DISTINCT city from People;
select ID, City, Name from People;
ALTER TABLE People AUTO_INCREMENT=1001; # Configurar el inicio en 1001
SELECT * FROM People where City = "Bucaramanga" or  (Age between 10 and 20);
select * from people order by city desc,  Name asc;

SET SQL_SAFE_UPDATES = 0; #change to 1 - > 0 / safe mode 1 / unsafe mode 0
update People set vac = "no"  where Age <  30;
SET SQL_SAFE_UPDATES = 1; #change to 1 - > 0 / safe mode 1 / unsafe mode 0

delete from  People where Age < 10;
Alter table people add subscribed varchar (55);
# Alter table people modify cell_number phone ;

select * from People_subscibed;
SELECT Age - 18 AS Age_vot FROM People;
drop table People_subscibed;
insert into People_subscibed ( Name, subscribed) values  ('Tim', "not"), ('Sam', "yes"), ('Carl', "not"),
 ('Carla', "yes"), ('Yerry', "not"), ('Anna', "yes");
 
 ALTER TABLE People_subscibed AUTO_INCREMENT=1001; # Configurar el inicio en 1001
 UPDATE People, People_subscibed  SET People.subscribed = People_subscibed.subscribed
 where People.ID = People_subscibed.ID;
