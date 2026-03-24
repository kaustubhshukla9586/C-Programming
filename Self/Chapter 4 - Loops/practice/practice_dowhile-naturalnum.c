#include <stdio.h>

int main() {
    int i,num;

    printf("Enter a number: ");
    scanf("%d",&num);
    i = 0;
    do {
        printf("%d\n",i);
        i++;
    }while (i<=num);
    
}


