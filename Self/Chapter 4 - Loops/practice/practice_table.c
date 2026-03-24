#include <stdio.h>

int main() {
    int num,i,max;

    printf("Enter a number: ");
    scanf("%d",&num);

    printf("Till how much? ");
    scanf("%d",&max);

    for (i=1;i<=max;i++){
        printf("%d * %d = %d\n",num,i,num*i);
    }
    

    return 0;
}