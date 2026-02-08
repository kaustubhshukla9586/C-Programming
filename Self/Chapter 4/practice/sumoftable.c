#include <stdio.h>

int main() {
    int num,i,max,total;

    printf("Enter a number: ");
    scanf("%d",&num);

    printf("Till how much? ");
    scanf("%d",&max);

    total = 0;

    for (i=1;i<=max;i++){
        total = num*i + total;
    }
    printf("The total of all table is %d",total);
    

    return 0;
}