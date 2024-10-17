# Write your MySQL query statement below

select firstName , lastName ,city, state
from person as p1
left join Address as A1
on p1.personId=A1.personId;