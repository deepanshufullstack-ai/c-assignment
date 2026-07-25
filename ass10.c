// Q1 check whether a given number is positive, negative or zero
// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     if(num>0){
//         printf("Positive");
//     } else if (num<0)
//     {
//         printf("Negative");
//     } else {
//         printf("Zero");
//     }
//     return 0;
// }

// Q2 check whether a given character is an alphabet, digit or special character
// #include<stdio.h>
// int main(){
//     char ch;
//     printf("Enter a character: ");
//     scanf("%c", &ch);
//     if(ch>='A' && ch<='Z'){
//         printf("Uppercase alphabet");
//     } else if (ch>='a' && ch<='z')
//     {
//         printf("Lowercase alphabet");
//     } else if (ch>='0' && ch<='9'){
//         printf("Digit");
//     } else {
//         printf("Special character");
//     }
//     return 0;
// }

// Q3 check whether the triangle is valid or not
// #include<stdio.h>
// int main(){
//     char s1, s2, s3;
//     printf("Enter side of triangle: ");
//     scanf("%d%d%d", &s1, &s2, &s3);
//     if(s1+s2>s3 || s2+s3>s1 || s3+s1>s2 ){
//         printf("Valid triangle");
//     } else {
//         printf("Invalid triangle");
//     }
//     return 0;
// }

// Q4 display number of days in that month
// #include<stdio.h>
// int main(){
//     int month;
//     printf("Enter a month number: ");
//     scanf("%d", &month);
//     if(month==1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 9 || month == 10 || month==12){
//         printf("31 days");
//     } else if (month == 4 || month == 6 || month == 9 || month == 11){
//         printf("30 days");
//     } else {
//         printf("28 days");
//     }
// }



////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void checkPosNegAndZero(int n){
    if(n>0){
        printf("Number is positive");
    } else if(n==0){
        printf("Number is Zero");
    } else {
        printf("Number is negative");
    }
}
void checkAlphabet(char ch){
    if(ch>='a' && ch<='z'){
        printf("Lowercase alphabet");
    } else if(ch>='A' && ch<='Z'){
        printf("Uppercase alphabet");
    } else if(ch>='0' && ch<='9'){
        printf("Digit");
    } else {
        printf("Invalid");
    }
}
void validTriangleOrNot(int a, int b, int c){
    if((a+b>c) || (b+c>a) || (c+a>b)){
        printf("Valid triangle");
    } else {
        printf("Not valid");
    }
}
void printDaysOfMonth(int n1){
    if(n1==1 || n1==3 || n1==5 || n1==7 || n1==8 || n1==10 || n1==12){
        printf("31 days in this month");
    } else if(n1==2){
        printf("28 & 29 days in this month");
    } else if(n1==4 || n1==6 || n1==9 || n1==11){
        printf("30 days in this month");
    } else {
        printf("Invalid month number");
    }
}
int main(){
    // int n; 
    // printf("Enter a number: ");
    // scanf("%d", &n);
    // checkPosNegAndZero(n);
    // int ch;
    // printf("Enter a character: ");
    // scanf("%c", &ch);
    // checkAlphabet(ch);
    // int a, b, c;
    // printf("Enter values for triangle sides: ");
    // scanf("%d%d%d", &a, &b, &c);
    // validTriangleOrNot(a, b, c);
    int n1;
    printf("Enter a montg number: ");
    scanf("%d", &n1);
    printDaysOfMonth(n1);
    return 0;
}