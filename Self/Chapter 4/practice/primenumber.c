#include <stdio.h>

int main() {
    int i,num;
    num = 2;

    // printf("Enter a number to check: ");
    // scanf("%d",&num);

    i = 2;
    if (num<=1){
        printf("%d is not a prime number.",num);
    }else {
        while (i<=num){
            if (num % i == 0){
                printf("%d is not a prime number.",num);
                break;
            }else{
                printf("%d is a prime number.",num);
                break;
            }
        }   
       
        
    }
    return 0;
}