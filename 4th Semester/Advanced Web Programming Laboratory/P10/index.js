const mysql = require('mysql');
const conn = mysql.createConnection({
  host: 'localhost',
  user: 'root', 
  password: 'XXX',
  multipleStatements: true
});
conn.connect(err => {
  if (err) throw err;
  const sql = `
    CREATE DATABASE IF NOT EXISTS school;
    USE school;
    CREATE TABLE IF NOT EXISTS students (
      id INT PRIMARY KEY,
      name VARCHAR(255),
      age INT
    );
    INSERT INTO students (name, age) VALUES ('John', 20);
    SELECT * FROM students;
    UPDATE students SET age = 21 WHERE name = 'John';
    DELETE FROM students WHERE name = 'John';`;
  conn.query(sql, (err, results) => {
    if (err) throw err;
    console.log(results);
    conn.end();
  });
});