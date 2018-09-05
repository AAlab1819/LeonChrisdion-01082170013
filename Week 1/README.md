
# Week 1
http://codeforces.com/submissions/chrisdionleon80

In this problemset, it's written that we need to find a fraction, the sum of the fraction 
numerator and the denominator should be  equal to the input integer, and the fraction must be 
irreducible . The numerator must be smaller than the denominator but we need to find the largest numerator 
that can be resulted.

To solve this problem we need to input the sum of the fraction that we want to find. Because the denominator should be
greater than the numerator, we need to devide the input by two, adn set the devided input to be the limit of the loop.

In the loop we need to find the  denominator by subtrack the input with the numerator. After we find it we ned too check whether the 
gcd of the denominator and the numerator is equal to 1 or not. We need to check the gcd because we need to find the irreducable fraction.
If the denominator is equal to 1, it will outuput the numerator and the denominator of the fraction, and the the loop would be break.
