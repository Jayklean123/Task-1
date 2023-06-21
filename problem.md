## Chetan's Co-Primality Test

Chetan recently learned about GCDs. He also came to know about the term co-prime. Two numbers are said to be co-prime to each other when they do not have any common factor other than 1. In mathematical terms, positive integers $a$ and $b$ are said to be co-prime when $gcd(a, b) = 1$. Now, Chetan is wondering how many numbers are co-prime with a number $N$ in a range $[L, R]$, both inclusive. Also, the resulting answer could be quite big. So, he wants the answer modulo $10^9+7$.

### Input
Each test contains multiple test cases. The first line contains a single integer $T, (1 \le T \le 100)$ - the number of test cases. 

Description of the test cases follows: 
The only line of each test case contains three integers $N$, $L$ and $R$ $(2 \le N \le 10000$ and $1 \le L < R \le 10^{18})$. 

### Output
For each test case, output a single integer on a different line - the count of numbers between $L$ and $R$ (both inclusive), which are co-prime with $N$ modulo $10^9+7$

### Example
**input**
```
2
3 1 10
12 20 100
```
**output**
```
7
26
```
