# Write your MySQL query statement below

select unique_id ,name
from Employees E1
left join  EmployeeUNI E2
on
e1.id=e2.id;