// Q1 calculate factorial of a number
// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     int factorial=1;
//     while(num>=1){
//         factorial=factorial*num;
//         num--;
//     }
//     printf("Factorial=%d", factorial);
//     return 0;
// }

// Q2 count digit in a given number
// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     int count=0;
//     int digit=0;
//     while(num>0){
//         digit=num%10;
//         printf("Digit is %d\n", digit);
//         num=num/10;
//         count++;
//     }
//     printf("Digits count is %d", count);
//     return 0;
// }

// Q3 given number is prime or not
// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     int i;
//     for(i=2; i<=num-1; i++){
//         if(num%2==0){
//             printf("%d is a not prime number", num);
//             break;
//         } else {
//             printf("%d is a prime number", num);
//             break;;
//         }
//     }
//     return 0;
// }

// Q4 calculate LCM of two numbers
// #include<stdio.h>
// int main(){
//     int num1, num2, max;
//     printf("Enter two numbers: ");
//     scanf("%d%d", &num1, &num2);
//     max=(num1>num2)? num1 : num2;
//     while (1)
//     {
//         if(max%num1==0 && max%num2==0){
//             printf("The lcm of %d and %d is %d\n", num1, num2, max);
//             break;
//         }
//         max++;
//     }    
//     return 0;
// }

// Q5 reverse a given number
// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     int digit=0;
//     int reverse=0;
//     while(num>0){
//         digit=num%10;
//         printf("digit=%d\n", digit);
//         num=num/10;
//         printf("num=%d\n", num);
//         reverse=reverse*10+digit;
//         printf("reverse=%d\n\n", reverse);
//     }
//     printf("Reverse=%d", reverse);
//     return 0;
// }