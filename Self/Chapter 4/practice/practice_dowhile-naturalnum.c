#include <stdio.h>

int main() {
    // int i,num;

    // printf("Enter a number: ");
    // scanf("%d",&num);
    // i = 0;
    // do {
    //     printf("%d\n",i);
    //     i++;
    // }while (i<=num);

    int a , x, y;

    a = 0; 
    x = a++ + ++a;
    y = ++a + a++;
    printf("X = %d, Y = %d , A = %d",x,y,a);
    return 0;
}