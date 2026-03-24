#include <stdio.h>


int greeting(char* x){
    printf("Good %s.\n",x);
}

int main() {
    char* a = "Morning";
    char* b = "afternoon";
    char* c = "night";

    greeting(a);
    greeting(b);
    greeting(c);
    return 0;
}