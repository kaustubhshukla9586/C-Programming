#include <stdio.h>

int main() {
    int len;
    printf("The Length of the rectangle is: ");
    scanf("%d",&len);

    int bd;
    printf("The width of the rectangle is: ");
    scanf("%d",&bd);

    int area = len*bd;
    printf("The area is: %d",area);
}