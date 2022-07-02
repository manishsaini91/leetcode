SELECT Email
FROM Person
GROUP BY Email
HAVING count(*)>=2