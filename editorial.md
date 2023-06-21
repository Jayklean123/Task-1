## Chetan's Co-Primality Test | Editorial

**Tags:** Euler's Totient Function, GCD 

### Brute Force Approach
One simple idea is to iterate over all the numbers in the given range and check if the number is coprime with $N$.
This way we can count all the numbers in the range co-prime with $N$. To find if a number is co-prime with $N$, we can calculate its $gcd$ with $N$. 
Calculating $gcd$ will take $O(log(N))$ time.

But, this approach won't pass the time limits.
Time complexity of this approach would be $O((R-L)\cdot log(N))$. Value of $(R-L)$ could be as high as $10^{18}$.
So, we need to do better.

### Optimised Approach
We can use Euler's totient function for this problem. You can read about it [here](https://en.wikipedia.org/wiki/Euler%27s_totient_function).
Euler's totient function counts the positive integers between $1$ and $n$ that are relatively prime to $n$. We'll denote totient function of $n$ with 
$\phi(n).$

We can also extend this to $\phi(n)=$ count of numbers co-prime with $n$ among any $n$ consecutive numbers. This can easily be derived using some 
modular arithmetic. 

Once we have the value of $\phi(N)$, we know the count of numbers co-prime with $N$ in every period of $N$. We can significantly
shorten the range we manually need to check. Starting from $L$, If $x$ is the maximum number of period of $N$ possible till $R$, then we will get 
$x\times \phi(N)$ as count of co-primes in that range. 
We'll be left with less than $N$ numbers to be checked by brute force which will take $O(N log(N))$ time, using the brute force technique.

To calculate $\phi(N)$ efficiently, you can refer to this [blog](https://www.geeksforgeeks.org/eulers-totient-function/).
Calculating $\phi(N)$ will take $O(\sqrt{N}\cdot\log(N))$ time. 

Our overall time complexity will be $O(T\times (N\cdot log(N) + \sqrt{N} \cdot log(N)))$, which will satisfy our time limits.
