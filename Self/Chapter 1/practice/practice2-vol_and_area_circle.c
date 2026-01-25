#include <stdio.h>

int main(){
    int rad;
    printf("Enter the radius: ");
    scanf("%d",&rad);

    int area = (22/7) * rad * rad;
    printf("The area of Circle is %d\n",area);

    int ht;
    printf("Enter the height of the cylinder: ");
    scanf("%d",&ht);
    int vol =  (22/7) * rad  * rad * ht ;
    printf("The volume of the cylinder is %d",vol);
    return 0;

}