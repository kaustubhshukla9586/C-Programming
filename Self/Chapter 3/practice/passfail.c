#include <stdio.h>

int main() {
    
    int english;
    int maths;
    int science;

    printf("Enter marks in English: ");
    scanf("%d",&english);

    printf("Enter marks in maths: ");
    scanf("%d",&maths);

    printf("Enter marks in science: ");
    scanf("%d",&science);

    float total = maths + english + science;
    float p = (total/300)*100;

    if ((p>=40) && (maths>33) && (english>33) && (science>33)){
        printf("Pass in all Subjects with total percentage of %.2f",p);
    } else {
        printf("Fail");
    }



    return 0;
}