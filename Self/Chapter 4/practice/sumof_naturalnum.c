#include <stdio.h>

int main() {
    int total,i,num;

    // printf("Enter a number: ");
    // scanf("%d",&num);
    total=0;
    num = 6;
    i = 1;

    // with while loop
    // while (i<=num){
    //     total=i+total;
    //     i++;
    // }

    // With For loop
    // for (i=1;i<=num;i++){
    //     total = i+total;
    // }

    // With do while loop
    // do {
    //     total+=i;
    //     i++;
    // }while(i<=num);

    printf("The sum of all numbers is %d",total);

    return 0;
}