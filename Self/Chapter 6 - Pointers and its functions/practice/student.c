// Problem Scenario: Student Marks & Result System
// 🔹 Scenario

// A school wants to automate its result system.

// Each student has marks in 5 subjects, and the marks are stored in an array using pointer to 1-D array

// The system should:

// Calculate total marks
// Calculate average marks
// Find highest and lowest marks
// Decide pass or fail
// Pass if average ≥ 40
// Fail otherwise

// Problem Statement

// Given an array of marks for a student, write a program to:

// Compute total and average
// Find highest and lowest marks
// Display result (Pass/Fail)



#include <stdio.h>

int totalMarks(int arr[], int n);
float averageMarks(int arr[], int n);
void highLow(int arr[], int n);
void passFail(int arr[], int n);

int totalMarks(int arr[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}

float averageMarks(int arr[], int n){
    int tm = totalMarks(arr,n);
    float avg = tm/5.0;
    return avg;
}

void highLow(int arr[], int n){
    int high = arr[0],low = arr[0];
    for(int i = 0; i < n; i++){
        if (arr[i]>high){
            high = arr[i];
        }
    }
    for(int i = 0; i < n; i++){
        if (arr[i]<low){
            low = arr[i];
        }
    }
    printf("The highest marks is %d\n",high);
    printf("The lowest marks is %d\n",low);
}

void passFail(int arr[], int n){
    int avg = averageMarks(arr,n);
    if (avg >= 40){
        printf("Pass\n");
    }else if (0<=avg && avg<40){
        printf("Fail\n");
    }else{
        printf("Invalid Marks.");
    }
}

void print(int marks[], int n){
    printf("Total Marks: %d\n",totalMarks(marks,n));
    printf("Average Marks: %.2f\n",averageMarks(marks,n));
    highLow(marks,n);
    passFail(marks,n);
}


int main() {
     
    // int marks[5] = {46,77,88,32,54};
    // int n = 5;
    // printf("Enter the marks of the student: ");
    // for(int i = 0; i < 5; i++){
    //     scanf("%d",&marks[i]);
    // }

    int test1[]  = {80, 90, 85, 70, 75};
    int test2[]  = {40, 40, 40, 40, 40};
    int test3[]  = {39, 39, 39, 39, 39};
    int test4[]  = {100, 100, 100, 100, 100};
    int test5[]  = {0, 0, 0, 0, 0};
    int test6[]  = {100, 0, 100, 0, 100};
    int test7[]  = {20, 30, 25, 15, 10};
    int test8[]  = {55, 42, 38, 61, 49};
    int test9[]  = {99, 1, 99, 1, 99};
    int test10[] = {41, 39, 41, 39, 41};
    

    print(test1,5);
    print(test2,5);
    print(test3,5);
    print(test4,5);
    print(test5,5);
    print(test6,5);
    print(test7,5);
    print(test8,5);
    print(test9,5);
    print(test10,5);

    return 0;
}