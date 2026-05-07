#include <stdio.h>

int main() {

    /*  
    Vowel Small = 
    a 97 
    e 101
    i 105
    o 111
    u 117
    A 65
    E 69
    I 73
    O 79
    U 85
    " " 32


    */
    int n = 500;
    int count = 0;
   
    char s[500] = "I am Kaustubh Shukla\0"; // consonant number : 10
    fgets(s,5000,stdin);
    // printf("%d",str[2] == 114);
    
    for (int i = 0; s[i] !='\0'; i++){
        if (s[i] == '\0'){
            printf("Loop Break");
            break;
        }
        else if (s[i] == 97 ||
            s[i] == 'a' ||
            s[i] == 'e' ||
            s[i] == 'i' ||
            s[i] == 'o' ||
            s[i] == 'u' ||
            s[i] == 'A' ||
            s[i] == 'E' ||  
            s[i] == 'I' ||
            s[i] == 'O' ||
            s[i] == 'U' ||
            s[i] == ' '
        ){
            continue;
        }else{
            count++;
        }
    }

    printf("%d",count);
    return 0;
}