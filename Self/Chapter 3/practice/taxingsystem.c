#include <stdio.h>

int main() {
    
    int salary;
    printf("Enter your total salary: ");
    scanf("%d",&salary);
    float tax;
    float atax;

    if (250000<=salary<=500000){
        tax = (5.0/100) * salary;
        atax = salary - tax;
    } else if (500000<=salary<=1000000){
        tax = (20.0/100) * salary;
        atax = salary - tax;
    } else if (salary>1000000) {
        tax = (30.0/100) * salary;
        atax = salary - tax;
    } else {
        printf("Your are not taxed because you have low salary");
    }

    printf("The tax you're paying is %.2f and your salary after paying taxes is %.2f",tax,atax);
    return 0;
}