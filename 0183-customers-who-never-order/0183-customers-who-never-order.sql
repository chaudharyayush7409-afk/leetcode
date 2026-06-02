# Write your MySQL query statement below
SELECT c.name as Customers
FROM Customers as c
LEFT JOIN Orders as o
ON c.id =  O.CustomerId
WHERE o.CustomerId is NULL;