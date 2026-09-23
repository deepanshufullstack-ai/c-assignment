#include<stdio.h>
int main(){
    // if statement
    int age=20;
    if(age>=18){
        printf("You can vote\n");
    }

    // if-else statement
    int number=10;
    if(number%2==0){
        printf("Even number\n");
    } else {
        printf("Odd number\n");
    }

    // if-else-if ladder
    int marks=75;
    if(marks>=90){
        printf("Grade A++\n");
    } else if(marks>=75){
        printf("Grade A\n");
    } else if(marks>=60){
        printf("Grade B\n");
    } else {
        printf("Grade C\n");
    }

    int age1=20;
    int citizen=1;
    if(age1>=18){
        if(citizen==1){
            printf("You can vote\n");
        }
    }
    return 0;
}