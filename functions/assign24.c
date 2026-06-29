// Q1 prime numbers between two numbers (TSRN)
// #include <stdio.h>
// void primeNumbers(int a1, int a2){
//     int i, j, isPrime;
//     for(i=a1+1; i<=a2-1; i++){
//         isPrime=1;
//         for(j=2; j<=a1-1; j++){
//             if(i%j==0){
//                 isPrime=0;
//                 break;
//             }
//         }
//         if(isPrime){
//             printf("%d", i);
//         }
//     }
// }
// int main()
// {
//     int num1, num2;
//     printf("Enter two numbers: ");
//     scanf("%d%d", &num1, &num2);
//     primeNumbers(num1, num2);
//     return 0;
// }

// Q2 first n terms of fibonacci series (TSRN)
// #include <stdio.h>
// void printFib(int n){
//     int i, a=0, b=1, c;
//     for(i=1; i<=n; i++){
//         printf("%d\n", a);
//         c=a+b;
//         a=b;
//         b=c;
//     }
// }
// int main()
// {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     printFib(num);
//     return 0;
// }

// Q3 print pascal triangle (TSRN)
// #include<stdio.h>
// int main(){
//     return 0;
// }

// Q4 all armstrong number under two given numbers (TSRN)
// #include <stdio.h>
// void printArmstrong(int a, int b)
// {
//     int i, digit, sum, temp;
//     for(i=a; i<=b; i++){
//         temp=i;
//         sum=0;
//         while(temp>0){
//             digit=temp%10;
//             sum=sum+(digit*digit*digit);
//             temp=temp/10;
//         }
//         if(sum==i){
//             printf("%d\n", i);
//         }
//     }
// }
// int main()
// {
//     int num1, num2;
//     printf("Enter two numbers: ");
//     scanf("%d%d", &num1, &num2);
//     printArmstrong(num1, num2);
//     return 0;
// }

// Q5 sum of a series
// #include<stdio.h>
// int main(){
//     return 0;
// }