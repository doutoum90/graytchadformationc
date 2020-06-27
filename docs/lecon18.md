<script type="text/javascript"
        src="https://cdnjs.cloudflare.com/ajax/libs/mathjax/2.7.0/MathJax.js?config=TeX-AMS_CHTML"></script>
# Leçon C 18
## La récursivité
* condition d'arrêt
* repetition appel

### La fonction factorielle
> u(n)=n*(n-1)*...*1
> u(n)=n*u(n-1)
> u(0)=1
> u(1)=1
$$
n =\prod_{\mathclap{1\le i\le n}} x_{i}
$$

### La fonction suite de fibonnaci
> $$
fib(n) = \begin{cases} 
0 &\text{si } n=0 \\
1 &\text{si } n=1 \\
fib(n-1)+fib(n-2)
\end{cases}
$$

### La fonction somme de n premier entiers

u(n)=n +(n-1)+.... +1+0
> $$
somme(n) = \begin{cases} 
n+somme(n-1)  &\text{si } n>1\\
0 &\text{si }  n =0\\
\end{cases}
$$

>$$
u(n) =\sum_{\mathclap{1\le i\le n}} x_{i}
$$