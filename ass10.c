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