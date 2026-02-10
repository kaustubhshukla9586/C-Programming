#include <stdio.h>

int main() {
    int i,z=1;
    char c = '*';
    int n = 5;

    for (i=1;i<=n;i++){
        for (z=i;z<=n;z++){
            printf("%c",c);
            }printf("\n");

    }
    
    return 0;
}