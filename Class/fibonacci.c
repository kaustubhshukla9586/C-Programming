#include <stdio.h>
long long int fib(int x)
{
    if (x == 1 || x == 0){
        return x;
    }else{
        return (fib(x - 1) + fib(x - 2));
    }
}

int main()
{
    
    long long int a = 10;
    printf("%lld", fib(a));

    return 0;
}