#include <stdio.h>

int main() {
    
    int a;
    int b;
    int c;
    int d;
    
    printf("Enter number 1: ");
    scanf("%d",&a);
    printf("Enter number 2: ");
    scanf("%d",&b);
    printf("Enter number 3: ");
    scanf("%d",&c);
    printf("Enter number 4: ");
    scanf("%d",&d);

    if (a>b){
        if (a>c) {
            if (a>d){
                printf("A = %d",a);
            } else {
                printf("D = %d",d);
            }
        } else if (c>d){
            printf("C = %d",c);
        } else {
            printf("D = %d",d);
        }
    } else if (b>c){
        if (b>d){
            printf("B = %d",b);
        } else {
            printf("D = %d",d);
        }
    } else if (c>d){
        printf("C = %d",c);
    } else {
        printf("D = %d",d);
    }

    return 0;
}