#include <stdio.h>
#include <string.h>

struct books {
    char name[100];
    int page;
    float price;
};

int main() {

    struct books b1,b2;

    strcpy(b2.name,"Journey To The West");
    b2.page = 493;
    b2.price = 999;

    printf("Enter Name: ");
    scanf("%s", b1.name);
    printf("\nEnter Pages: ");
    scanf("%d", &b1.page);
    printf("\nEnter Price: ");
    scanf("%f", &b1.price);

    printf("Book 1 Details \n Book Name: %s\n Pages: %d Price: %f\n",b1.name,b1.page,b1.price);
    printf("Book 2 Details \n Book Name: %s\n Pages: %d Price: %f",b2.name,b2.page,b2.price);

    return 0;
}