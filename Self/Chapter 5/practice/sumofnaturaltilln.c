#include <stdio.h>

int sum(int x ){
    int total = x;
    if (x==0){ // base case
        return total+=0;
    }else if (x<0){
        return total += sum(x+1);
    }else{
        return total += sum(x-1);
    }
}

int main() {
    int a = 1;

    printf("The sum is %d",sum(a));
     
    return 0;
}

