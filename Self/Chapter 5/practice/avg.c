#include <stdio.h>

int sum(int x,int y, int z){
    printf("The average of this number is %d.",(x+y+z)/3);
}

int main() {
    int x = 10;
    int y = 20;
    int z = 20;
    sum(x,y,z);

    return 0;
}