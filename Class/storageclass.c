#include <stdio.h>

// 4 Types
// Auto - declared using auto int x = 0 , stored in ram, scope is local, lifetime is withing the block
// register - same as auto with but stored in cpu register
// static - when we are just initializing this variable it would take value as 0 instead of a garbage value like auto and register
// extern -  this is used to refer to the global variable , default value is zero with scope of a global, stored in ram, entire duration of program
int x = 10;

    void f1()
    {
        // static int x = 0 // Gives the output 1 2 3 because it statically change the value and the life time of this is Throughout the program

        // register int x = 0 // Gives output 1 1 1 because it stores the value inside the cpu and the lifetime is withing the block of the code

        // int x = 0; // automatically uses the storage class of auto which is similar to register only change is the register stores the value inside CPU REGISTERS which is faster to access for the program

        // x ++ ;
        // printf("%d\n",x);
    }
    int main(){
        // f1();
        // f1();
        // f1();
        int x; // Gives a garbage value 
        // extern int x; // Gives the global variable 
        // extern int x = 20; // Error because using the initization and also the extern which is not correct
        printf("%d",x);

    }