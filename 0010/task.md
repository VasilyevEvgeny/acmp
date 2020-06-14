#Hometask

*(Time: 1 s, Memory: 16 Mb, Difficulty: 17%)*

Vasya studied quadratic equations at school and realized how easily 
they are solved by calculating the discriminant. But Petya told him 
about a method for solving cubic equations of the 
form `A*X^3 + B*X^2 + C*X + D = 0`. At the mathematics faculty, 
Vasya was asked to solve about a hundred equations of this kind. But, 
unfortunately, Vasya forgot the formulas that Petya told him about. 
But Vasya knew that all the roots of the equations are integers and 
are on the interval `[-100, 100]`. Therefore, Vasya has a chance to find 
them by brute force, but for this he will have to spend a lot of time, 
because it may be necessary to enumerate several thousand values. 
Help Vasya write a program that will help him find the roots of cubic 
equations!

##Input
The only line of the input file `INPUT.TXT` contains `4` numbers: 
`A`, `B`, `C` and `D` - integer coefficients of the cubic equation. 
Each coefficient modulo less than `32768`, `A != 0`.

##Output
В единственную строку выходного файла `OUTPUT.TXT` нужно вывести через 
пробел в порядке возрастания все корни заданного кубического уравнения. 
Кратные корни следует выводить только один раз.

|**#** | **INPUT.TXT** | **OUTPUT.TXT** |
|---|---|-----|
|1|  1 -3 0 0 |  0 3 |
|2| 3 -15 18 0 | 0 2 3 |
|3| 1 -7 -33 135 | -5 3 9 |
