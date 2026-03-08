CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
    select DISTINCT(e1.salary)
    from Employee e1
    where N-1 = (Select count(DISTINCT(e2.salary))
                from Employee e2
                where e2.salary>e1.salary)
  );
END