#Statistics

*(Time: 1 s, Memory: 16 Mb, Difficulty: 15%)*

Vasya does not like English, but every time he tries to get at least `4`
for a quarter to remain a drummer. In the current quarter, Vasya noticed 
the following pattern: on odd days of the month, he received `3`, 
and on even days - `4`. He also remembers the days on which he received 
these grades. Therefore, he wrote out all these days on a piece of paper 
in order to evaluate how many `3` he had and how many `4`. Help Vasya 
do this by arranging even and odd numbers in different lines. Vasya can 
count on a score of `4`, if `4` are no less than `3`.

##Input
The first line of the input file `INPUT.TXT` contains a single number `N` - 
the number of elements in the integer array (`1 <= N <= 100`). The second 
line contains `N` numbers representing the given array. Each element 
of the array is a natural number from `1` to `31`. All elements of the 
array are separated by a space.

##Output
In the first line of the `OUTPUT.TXT` output file, you need to display 
the numbers that correspond to the days of the months on which Vasya 
received the `3`, and in the second line, accordingly, arrange the dates 
of the month on which Vasya received the `4`. In the third line you need 
to print `"YES"` if Vasya can count on four and `"NO"` otherwise. In each 
line of the number should be displayed in the same order in which they go 
in the input. When outputting, numbers are separated by a space.

|**#** | **INPUT.TXT** | **OUTPUT.TXT** |
|---|---|-----|
|1|  5 <br> 4 16 19 31 2|  19 31 <br> 4 16 2 <br> YES |
|2|  8 <br> 29 4 7 12 15 17 24 1|  29 7 15 17 1 <br> 4 12 24 <br> NO |

