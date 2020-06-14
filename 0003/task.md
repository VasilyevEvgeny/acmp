#Five five - twenty five!

*(Time: 1 s, Memory: 16 Mb, Difficulty: 8%)*

Vasya and Petya go to school in the same class. Recently Petya told Vasya 
about a tricky way of squaring natural numbers ending in the number `5`. 
Now Vasya can easily square two-digit (and even some three-digit) numbers 
ending in `5`. The method is as follows: to square the numbers, ending in `5`, 
it's enough to multiply the number obtained from the original by deleting 
the last five by the next number in order, then it remains only to assign 
`"25"` to the resulting result on the right. For example, in order to square 
`125`, it's enough to multiply `12` by `13` and ascribe `25`, i.e. attributing to 
the number `12 * 13 = 156` the number `25`, we get the result `15625`, i.e. 
`125^2 = 15625`. Write a program that puts a number ending in `5` in a square so 
that Vasya can test his skills.

##Input
The only line of the input file `INPUT.TXT` contains one positive integer 
`A`, ending in `5`, not exceeding `4*10^5`.

##Output
In the output file OUTPUT.TXT, output one positive integer - `A^2`
without leading zeros.

|**#** | **INPUT.TXT** | **OUTPUT.TXT** |
|---|---|-----|
|1|  5|  25|
|2|  75|  5625|
|3|  4255|  18105025|

