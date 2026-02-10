#include <stdio.h>

int main() {
    int a;
    printf("Enter: ");
    scanf("%d",&a);

    if(a%5==0){
        printf("Multiple of 5");
    }
    return 0;
}