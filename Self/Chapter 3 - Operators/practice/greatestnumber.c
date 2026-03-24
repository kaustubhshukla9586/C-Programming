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

    // if (a>b){
    //     if (a>c) {
    //         if (a>d){
    //             printf("A is greatest = %d",a);
    //         } else {
    //             printf("D is greatest = %d",d);
    //         }
    //     } else if (c>d){
    //         printf("C is greatest = %d",c);
    //     } else {
    //         printf("D is greatest= %d",d);
    //     }
    // } else if (b>c){
    //     if (b>d){
    //         printf("B is greatest = %d",b);
    //     } else {
    //         printf("D is greatest = %d",d);
    //     }
    // } else if (c>d){
    //     printf("C is greatest = %d",c);
    // } else {
    //     printf("D is greatest = %d",d);
    // }

    if (a>b&&a>c&&a>d){
        printf("A is Greatest");
    }else if (b>a&&b>c&&b>d){
        printf("B is Greatest");
    }
    else if (c>a&&c>b&&c>d){
        printf("C is Greatest");
    }
    else if (d>a&&d>b&&d>c){
        printf("D is Greatest");
    }

    return 0;
}