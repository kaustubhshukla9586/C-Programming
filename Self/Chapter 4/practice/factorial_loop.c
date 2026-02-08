#include <stdio.h>

int main() {
    int num,total,i;

    printf("Enter A Number: ");
    scanf("%d",&num);
    i = 1;
    total = 1;

    if (num<=0){
        printf("There is not factorial for negative numbers and 0");
    }else{
        
        // Using While loop
        // while (num>=i){
        //     total *= num;
        //     num--;
        // }

        // Using For Loop
        for (i=1;num>=i;num--){
            total*=num;
        }
    
    printf("Factorial = %d",total);
    }
    
    return 0;
}
