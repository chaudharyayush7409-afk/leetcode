# Write your MySQL query statement below
SELECT T2.name as Employee
FROM Employee as T1 
JOIN Employee as T2
ON t1.id = t2.managerId
WHERE T2.salary > T1.salary;

