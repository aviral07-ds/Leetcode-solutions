select name,bonus from Employee
left join Bonus using(empID)
where bonus<1000 or bonus is null; 