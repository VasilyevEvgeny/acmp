#Game

*(Time: 1 s, Memory: 16 Mb, Difficulty: 4%)*

In their free time, classmates Vasya and Petya love to play various 
logic games: sea battle, tic-tac-toe, chess, checkers and much more. 
The guys have already tried and played all kinds of classic games of
this kind, including computer games. Once they wanted to play something 
new, but could not find anything suitable. Then Petya came up with 
the following game "Guess". Two participants are playing. The first one 
makes any three-digit number, such that the first and last digits differ 
from each other by more than one. Next, the player who makes the number 
flips the hidden number, changing the first and last digits in places, 
thus getting another number. Then, the minimum is subtracted from the 
maximum of the obtained two numbers. The task of the second player is 
to guess by the first digit of the number obtained as a result of 
subtraction the number itself. For example, if Vasya guessed the 
number `487`, then by rearranging the first and last digit, he will get 
the number `784`. After which he will have to subtract the number 
`487` from `784`, resulting in the number `297`, which Petya should 
guess by the indicated first digit `"2"`, taken from this number. Petya 
is better than Vasya in mathematics, so he almost always wins in games 
of this type. But in this case, Petya cheated and specially invented 
a game in which he would not lose to Vasya in any case. The fact is that 
the game invented by Petya has a winning strategy, which is as follows: 
the desired number is always three-digit and its second digit is always 
equal to nine, and to obtain the value of the latter it is enough to 
subtract the first from nine, i.e. in the case considered above, the 
last digit is `9-2 = 7`. Help Petya simplify the process of guessing 
the number by the given first digit by writing the appropriate program.

##Input
In a single line of the input file `INPUT.TXT`, a single digit `K` is set, 
corresponding to the first digit received by Vasya as a result of 
subtracting the smallest value that Vasya made from the largest.

##Output
In the output file `OUTPUT.TXT`, you need to display the value of the 
difference received by Vasya.

|**#** | **INPUT.TXT** | **OUTPUT.TXT** |
|---|---|-----|
|1|  5|  594|
|2|  2|  297|
|3|  7|  792|

