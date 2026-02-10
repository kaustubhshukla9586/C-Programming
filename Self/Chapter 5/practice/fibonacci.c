#include <stdio.h>

long long int fib(int x){ /
    if (x==1){
        return 1;
    }else if (x==0){
        return 0;
    }else{
        return fib(x-1)+fib(x-2); // this is practical upto 40 otherwise this function calls itself more than 20billion times
    }
}

int main() {

    int x = 10;
    printf("The fib is %d",fib(x));    
    return 0;
}