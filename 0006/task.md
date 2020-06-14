#Chess

*(Time: 1 s, Memory: 16 Mb, Difficulty: 23%)*

Most recently, Vasya started programming and decided to implement 
his own program for playing chess. But he had the problem of determining 
the correctness of the move of the horse, which makes the user. 
Those, if the user enters the value `"C7-D5"`, then the program should 
define this as the correct move, if `"E2-E4"` is entered, then the move 
is incorrect. It is also necessary to check the correctness of the entry 
entry: if, for example, `"D9-N5"` is entered, the program should determine 
this entry as erroneous. Help him complete this test!

##Input
The single line of the input file `INPUT.TXT` contains the text of 
the move (non-empty line) that the user specified. User cannot enter 
a string longer than `5` characters.

##Output
В выходной файл `OUTPUT.TXT` нужно вывести `"YES"`, если указанный ход 
конем верный, если же запись корректна (в смысле правильности записи 
координат), но ход невозможен, то нужно вывести `"NO"`. Если же координаты 
не определены или заданы некорректно, то вывести сообщение `"ERROR"`.

|**#** | **INPUT.TXT** | **OUTPUT.TXT** |
|---|---|-----|
|1|  C7-D5|  YES |
|2|  E2-E4|  NO|
|2|  BSN|  ERROR|

