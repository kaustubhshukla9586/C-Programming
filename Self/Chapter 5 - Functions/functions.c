#include <stdio.h>


//Function prototype 
// int sum(int,int); //  int inside the parenthesis reperesents what the function would take as an input. - This is used to tell the compiler that we will use this function later in the program 

//Function definition
int sum(int x,int y){ // here x and y are parameters
    printf("The sum of %d and %d is %d\n",x,y,x+y);
    return x+y; // this would return the value and will be assigned to the c=sum(a,b);
}

int main() {

    int a = 2;
    int b = 3;
    sum(a,b); // Function call
    // a = 29;
    // b = 31;
    sum(a,b); // a and b here are arguments given to the functions
    // a = 20;
    // b = 30;
    sum(a,b);
    // a = 1;
    // b = 39;
    sum(a,b);

    
    return 0;
}