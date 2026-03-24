#include <stdio.h>

int main (){
    
    float p;
    printf("Enter principal amount: ");
    scanf("%f",&p);

    float roi;
    printf("Enter rate of interest perecent: ");
    scanf("%f",&roi);

    int noy;
    printf("Enter number of years: ");
    scanf("%d",&noy);

    float si = (p*noy*roi)/100;
    printf("The simple interest is %.2f",si);
}