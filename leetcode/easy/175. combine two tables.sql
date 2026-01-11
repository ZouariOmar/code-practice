-- sudo mariadb < '175. combine two tables.sql' --
DROP TABLE IF EXISTS person;
CREATE TABLE person (
    personid INT AUTO_INCREMENT PRIMARY KEY,
    lastname VARCHAR(50) NOT NULL,
    firstname VARCHAR(100) NOT NULL
);
insert into person (personid, lastname, firstname) values ('1', 'Wang', 'Allen');
insert into person (personid, lastname, firstname) values ('2', 'Alice', 'Bob');

DROP TABLE IF EXISTS address;
CREATE TABLE address (
    addressid INT AUTO_INCREMENT PRIMARY KEY,
    personid INT NOT NULL,
    city VARCHAR(50) NOT NULL,
    state VARCHAR(50) NOT NULL
);
insert into address (addressid, personid, city, state) values ('1', '2', 'New York City', 'New York');
insert into address (addressid, personId, city, state) values ('2', '3', 'Leetcode', 'California');

-- Solution --
SELECT
    p.firstname,
    p.lastname,
    a.city,
    a.state
FROM person p LEFT JOIN address a ON p.personid = a.personid;
