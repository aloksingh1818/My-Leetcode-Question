# Write your MySQL query statement below
select a1.machine_id,ROUND(SUM(a2.timestamp-a1.timestamp)/
COUNT(*),3) As processing_time
from Activity a1
inner join Activity a2
on
A1.machine_id=A2.machine_id
and a1.process_id=a2.process_id
and a1.timestamp<a2.timestamp
Group By a1.machine_id;
