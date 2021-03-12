# Recurring-Decimal
Convert fraction into recurring decimal in C
e.g.
1 / 4 = 0.25
1 / 3 = 0.(3)
1 / 5 = 0.2
1 / 6 = 0.1(6)
7 / 11 == 0.(63)
29 / 12 == 2.41(6)
1 / 9 == 0.(1)
2 / 3 == 0.(6)
9 / 11 == 0.(81)
7 / 12 == 0.58(3)
1 / 81 == 0.(012345679)
22 / 7 == 3.(142857)
11 / 23 == 0.(4782608695652173913043)


The main idea is to find out the decimal place. In order word, where to put a decimal '.'

When a number is divided by 2 or 5, there is no recurring decimal. 1/2 = 0.5, 1/5 = 0.2. Only those are not 2 or not 5. eg. 3, 7, 11. How about 6? In fact, 6 is 2x3 where recurring decimal occurs due to the factor of 3. We factorize the denominator and rule out the factors 2 and 5.

For finding recurring decimal, we use long division. Since long divison will get the remainder, multiply the remainder by 10 and then use as a new nomerator and divide again. This process goes on and on. This fraction will finally multiply by 10^n (we mark down the n and then move the decimal place leftward at certain place m where m<n)

If the denominator has factors 2 or 5, it will be eliminated by some 10. If we know how many 10 need to eliminate 2 and 5, then we know where m is. 
