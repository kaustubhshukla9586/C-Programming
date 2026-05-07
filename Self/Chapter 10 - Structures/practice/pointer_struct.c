#include <stdio.h>
// Make this using pointer to structure 
struct employee {
    int id;
    char name[30];
    char role[20];
};

int main() {
    
    int n = 3;
    struct employee employee[n];

    for(int i = 0; i < n; i++){
        printf("Details of user %d\n",i+1);
        printf("Employee %d Name");
        fgets(employee[i].name,30,stdin);
    }

    return 0;
}