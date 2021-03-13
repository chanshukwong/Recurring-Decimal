# Recurring-Decimal in C
Convert fraction into recurring decimal in C

e.g.
1 / 4 = 0.25
1 / 3 = 0.(3)
1 / 5 = 0.2
1 / 6 = 0.1(6)
7 / 11 = 0.(63)
29 / 12 = 2.41(6)
1 / 9 = 0.(1)
2 / 3 = 0.(6)
9 / 11 = 0.(81)
7 / 12 = 0.58(3)
1 / 81 = 0.(012345679)
22 / 7 = 3.(142857)

The main idea is to find out the decimal place. In order word, where to put a decimal '.'

When a number is divided by 2 or 5, there is no recurring decimal. 1/2 = 0.5, 1/5 = 0.2. Only those are not 2 or not 5. eg. 3, 7, 11. How about 6? In fact, 6 is 2x3 where recurring decimal occurs due to the factor of 3. 1/6 = 1/2 - 1/3 = non recurring part + recurring part. 

Take an other example 1/56. 56=8x7=2^3x7. Note that 1/56 = 1/7 - 1/8 = 1/7 - 1/2^3. There are 2 parts. The front part is 1/7 which is recurring 0.(142857), while the latter part 1/2^3 = 0.125 not recurring. However, 1/56 = 0.017(857142). 1/7 has recurring just after the '.' The recurring part for 1/56 is 3 decimal place later. This is because 0.125 has 3 decimal place and make it not recurring until 3 decimal place later. When we know where the recurring part starts, it is not hard to use long division to find out where the recurring's last digit.

Similar case for 5. Any fraction can have form like = a/2^m + b/5^n + recurring part. The recurring part is pushed rightward either by a/2^m or b/5^n. This is not hard to find out which ones push harder. Then we know where the recurring part starts.

For finding recurring decimal, we use long division. Since long divison will get the remainder, multiply the remainder by 10 and then use as a new nomerator and divide again. This process goes on and on. If the digit appear again. This is the end of the recurring.

