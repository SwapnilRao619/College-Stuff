A=LOAD 'student.txt' USING PigStorage(',') AS (id:int, f:chararray, l:chararray, age:int, ph:chararray, city:chararray);
B=FILTER A BY city=='Chennai';
C=GROUP A BY age;
STORE B INTO 'filter';
STORE C INTO 'group';