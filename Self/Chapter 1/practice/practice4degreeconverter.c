#include <stdio.h>

int main (){
    float cel;
    printf("Enter the temperature in celsius: ");
    scanf("%f",&cel); // %f is used for float data type
    float far = (9.0/5.0)*cel + 32;
    printf("The temperature in farenheit is %f",far);

}