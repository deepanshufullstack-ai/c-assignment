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