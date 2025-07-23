A = LOAD 'customer.txt' USING PigStorage(',') AS (id:int, name:chararray, age:int, addr:chararray, sal:int);
B = LOAD 'order.txt' USING PigStorage(',') AS (oid:int, dt:chararray, cid:int, amt:int);
C = JOIN A BY id, B BY cid;
D = ORDER C BY age;
STORE C INTO 'joinoutput';
STORE D INTO 'sortoutput';