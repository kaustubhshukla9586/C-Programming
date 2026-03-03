#include <stdio.h>
long long int fib(int x)
{
    if (x == 1){
        return 1;
    }else if (x == 0){
        return 1;
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