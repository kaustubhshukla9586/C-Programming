#include <stdio.h>

int main ()
{
    // int a = 10;
    // int b = 3;
    // int c = a/b; // this will give 3 because any integer divided by integer in c always gives up a integer and not float

    // int (operation) int = int
    // int (operation) float = float
    // float (operation) float = float

    // int a = 10;
    // float b = 3;
    // float c = a/b; // This gives 3.333 cause one of them is float and another is int

    int c = 3.6; // This will give 3 cause int demotion
    

    printf("%d",c);
}