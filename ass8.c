// Q1 given number is three digit or not
// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     if((num>=100 && num<=999 ) || (num <=-100 && num>=-999)){
//         printf("Three digit number");
//     } else {
//         printf("Not three digit number");
//     }
//     return 0;
// }

// Q2 find greater between two numbers
// #include<stdio.h>
// int main(){
//     int num1, num2;
//     printf("Enter two number: ");
//     scanf("%d%d", &num1, &num2);
//     if(num1>num2){
//         printf("%d is greater", num1);
//     } else if(num2>num1){
//         printf("%d is greater", num2);
//     } else {
//         printf("Both are equal");
//     }
//     return 0;
// }

// Q3 find the roots type
// #include<stdio.h>
// int main(){
//     int r1, r2, r3, value;
//     printf("Enter three numbers: ");
//     scanf("%d%d%d", &r1, &r2, &r3);
//     value=r2*r2-4*r1*r3;
//     if(value>0){
//         printf("Roots are real & distinct");
//     } else if (value==0) {
//         printf("Roots are real & equal");
//     } else {
//         printf("Roots are imaginary");
//     }
//     return 0;
// }

// Q4 find leap year or not
// #include<stdio.h>
// int main(){
//     int year;
//     printf("Enter a year: ");
//     scanf("%d", &year);
//     if((year%400 == 0) || (year%4 == 0) &&(year%100 != 0)){
//         printf("Leap year");
//     } else {
//         printf("Not leap year");
//     }
//     return 0;
// }

// Q5 find greater between three numbers
// #include<stdio.h>
// int main(){
//     int n1, n2, n3;
//     printf("Enter three numbers: ");
//     scanf("%d%d%d", &n1, &n2, &n3);
//     if(n1>n2 && n1>n3){
//         printf("%d is greater", n1);
//     } else if(n2>n1 && n2>n3){
//         printf("%d is greater", n2);
//     } else if(n3>n1 && n3>n2){
//         printf("%d is greater", n3);
//     } else 
//     {
//         printf("All three numbers are equal");
//     }
//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void checkNumberIsThreeDigit(int n){
    if((n>=100 && n<=999) || (n<=-100 && n>=-999)){
        printf("Number is three digit");
    } else {
        printf("Number is not three digit");
    }
}
void findGreater(int a, int b){
    if(a>b){
        printf("%d is greater", a);
    } else if(b>a){
        printf("%d is greater", b);
    } else {
        printf("%d, %d Both are same", a, b);
    }
}
void checkRoots(int n1){
    if(n1>0){
        printf("Roots are real & distinct");
    } else if(n1==0){
        printf("Roots are real & equal");
    } else {
        printf("Roots are imaginary");
    }
}
void leapYearOrNot(int year){
    if((year%400 == 0) || (year%4 == 0) &&(year%100 != 0)){
        printf("Leap Year");
    } else {
        printf("Not leap year");
    }
}
void findGreatestBtwThree(int a1, int b1, int c1){
    if(a1>b1 && a1>c1){
        printf("%d is greatest", a1);
    } else if(b1>a1 && b1>c1){
        printf("%d is greatest", b1);
    } else if(c1>a1 && c1>b1){
        printf("%d is greatest", c1);
    } else {
        printf("All three numbers are same");
    }
}
int main(){
    // int n;
    // printf("Enter a number: ");
    // scanf("%d", &n);
    // checkNumberIsThreeDigit(n);
    // int a,b;
    // printf("Enter two numbers: ");
    // scanf("%d%d", &a, &b);
    // findGreater(a,b);
    // int a1, b1, c1, root=0;
    // printf("Enter three numbers: ");
    // scanf("%d%d%d", &a1, &b1, &c1);
    // root=b1*b1-4*a1*c1;
    // checkRoots(root);
    // int year;
    // printf("Enter a year: ");
    // scanf("%d", &year);
    // leapYearOrNot(year);
    int a1, b1, c1;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a1, &b1, &c1);
    findGreatestBtwThree(a1, b1, c1);
    return 0;
}