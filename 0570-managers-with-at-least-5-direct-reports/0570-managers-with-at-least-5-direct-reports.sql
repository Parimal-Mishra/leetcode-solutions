Select name From Employee Where id in(
    Select managerId
    from Employee
    group by managerId
    having count(*)>=5
);