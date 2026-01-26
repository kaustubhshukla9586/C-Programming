#include <stdio.h>

int main()
{
    // int a; // To declare int
    // float b; // To declare float
    // char c; // To declare char 

    int md = 10; // directly declare the value 
    int jd = md; // This will give 10 to jd as well so if we print jd we get 10
    int a=10,b=20,c=30,d=40; // To declare more than one variables in one go

    // printf("a=%d , b=%d , c=%d, d=%d, md=%d, jd=%d",a,b,c,d,md,jd);

    // We cannot re declare variables 
    // int a = 132; // this will give a error
    // we can do this 
    a = 123; // This works because no re decleration is done.
    printf("%d",a);


}