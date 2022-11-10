g++ -O0 complex.cpp 
sum=4e+38

real	0m1,020s
user	0m1,015s
sys	0m0,004s
.text         0000026a  

------------------------------------------------------------------------------

g++ -O1 complex.cpp 
sum=4e+38

real	0m0,481s
user	0m0,477s
sys	0m0,004s
.text         000001f6  

------------------------------------------------------------------------------

g++ -O2 complex.cpp 
sum=4e+38

real	0m0,232s
user	0m0,232s
sys	0m0,000s
.text         00000297  
------------------------------------------------------------------------------

g++ -O3 complex.cpp 

sum=4e+38

real	0m0,241s
user	0m0,241s
sys	0m0,001s
.text         00000289 

------------------------------------------------------------------------------

g++ -Os complex.cpp 

sum=4e+38

real	0m1,063s
user	0m1,062s
sys	0m0,001s
.text         000001ba  

------------------------------------------------------------------------------
g++ -Ofast complex.cpp
 
sum=4e+38

real	0m0,175s
user	0m0,175s
sys	0m0,001s
.text         00000310  

------------------------------------------------------------------------------
g++ -Og complex.cpp
sum=4e+38

real	0m0,489s
user	0m0,489s
sys	0m0,000s
.text         000001ec  


------------------------------------------------------------------------------
g++ -Oz complex.cpp

sum=4e+38

real	0m1,069s
user	0m1,065s
sys	0m0,004s
.text         000001ba  
------------------------------------------------------------------------------

Ключи оптимизации

O0 — оптимизация кода не производится

O1 — применяются самые простые и очевидные способы оптимизации

O2 — применяются практически все доступные компилятору способы оптимизации, кроме тех, что ускоряют вычисления за счет увеличения размера кода, или тех, которые иногда могут,
наоборот, замедлить выполнение программы

O3 — применяются все доступные компилятору способы оптимизации

Os — применяются только те способы оптимизации, которые уменьшают не время выполнения программы, а размер машинного кода

Ofast — применяются все способы оптимизации уровня 03, а также добавляется ряд других

Og — применяются только те способы оптимизации, которые не сильно затрудняют отладку машинного кода

Oz — похож на 'Os' сильнее оптимизирует размер