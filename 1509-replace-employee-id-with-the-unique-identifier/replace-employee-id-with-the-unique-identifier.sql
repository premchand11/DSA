# Write your MySQL query statement below
-- select e.name as name ,u.id as id

-- from e.employees as e left join u.employeeuni as u on e.id=u.id;

# Write your MySQL query statement below
select u.unique_id as unique_id , e.name as name from Employees e left join EmployeeUNI u on e.id=u.id  ;