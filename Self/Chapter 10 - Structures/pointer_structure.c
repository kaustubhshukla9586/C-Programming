#include <stdio.h>
#include <string.h>

struct student {
    char *name[20];
    int marks;
}s1;


int main() {

    struct student *s2;
    s2 = &s1;

    strcpy(s1.name,"Yash");
    s1.marks = 99;
    
    printf("%s %d",s2.name,s2.marks);

    return 0;
}