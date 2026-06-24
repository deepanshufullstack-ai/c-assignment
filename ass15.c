// Q1 print all prime numbers under 100
//  #include <stdio.h>
//  int main()
//  {
//      int n, i;
//      for (n = 2; n < 100; n++)
//      {
//          for (i = 2; i <= n - 1; i++)
//          if(n%i==0)
//          break;

//     if(i==n)
//     printf("%d\n", n);
//     }
//     return 0;
// }

// Q2 print all prime numbers between two given numbers
//  #include <stdio.h>
//  int main()
//  {
//      int n, i, a, b;
//      printf("Enter two numbers: ");
//      scanf("%d%d", &a, &b);
//      for (n = a+1 ; n < b; n++)
//      {
//          for (i = 2; i <= n - 1; i++)
//          if(n%i==0)
//          break;

//     if(i==n)
//     printf("%d\n", n);
//     }
//     return 0;
// }

// Q3 find next prime number of a given number
// #include <stdio.h>
// int main()
// {
//     int n, i;
//     printf("Enter a numbers: ");
//     scanf("%d", &n);
//     for (n = n + 1;; n++)
//     {
//         for (i = 2; i <= n - 1; i++)
//         {
//             if (n % i == 0)
//             {
//                 break;
//             }
//         }
//         if (i == n)
//         {
//             printf("%d\n", n);
//             break;
//         }
//     }
//     return 0;
// }

// Q4 calculate HCF of two numbers
// #include<stdio.h>
// int main(){
//     int a, b, h;
//     printf("Enter two numbers: ");
//     scanf("%d%d", &a, &b);

//     for(h=a>b?b:a; h>=1; h--){
//         if(a%h==0 && b%h==0){
//             break;
//         }
//     }
//     printf("HCF is %d", h);

// }

// Q5 whether two given numbers are co-prime numbers or not
// #include<stdio.h>
// int main(){
//     int a, b, h;
//     printf("Enter two numbers: ");
//     scanf("%d%d", &a, &b);

//     for(h=a>b?b:a; h>=1; h--){
//         if(a%h==0 && b%h==0){
//             break;
//         }
//         if(h==1){
//             printf("Co-prime");
//         } else {
//             printf("Not co-prime");
//         }
//     }
// }

// Q1 print prime numbers under 100
// #include<stdio.h>
// int main(){
//     int num, isPrime, i;
//     for(num = 2; num<100; num++){
//         isPrime=1;
//         for(i = 2; i<=num/2; i++){
//             if(num%i==0){
//                 isPrime = 0;
//                 break;
//             }
//         }
//         if(isPrime){
//             printf("%d\n", num);
//         }
//     }
//     return 0;
// }

// Q2 print prime number between two given numbers
// #include<stdio.h>
// int main() {
//     int n1, n2, num, i;
//     printf("Enter two numbers: ");
//     scanf("%d%d", &n1, &n2);
//     for(num = n1 + 1; num < n2; num++) {
//         for(i = 2; i < num - 1; i++) {
//             if(num % i == 0) {
//                 break;
//             }
//         }
//         if(i == num - 1) {
//             printf("%d\n", num);
//         }
//     }
//     return 0;
// }

// Q3 find next prime number of given number
// #include <stdio.h>
// int main()
// {
//     int num, i, isPrime, j;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     for (i = num + 1;; i++)
//     {
//         isPrime = 1;
//         for (j = 2; j < i / 2; j++)
//         {
//             if (i % j == 0)
//             {
//                 isPrime = 0;
//                 break;
//             }
//         }
//         if (isPrime)
//         {
//             printf("%d\n", i);
//             break;
//         }
//     }
//     return 0;
// }

// Q4 calculate HCF of two numbers
// #include <stdio.h>
// int main() {
//     int a, b, temp;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
//     while (b != 0) {
//         temp = b;
//         b = a % b;
//         a = temp;
//     }
//     printf("HCF = %d\n", a);
//     return 0;
// }

// Q5 whether two given numbers are co-prime or not
// #include <stdio.h>
// int main() {
//     int a, b, temp, gcd;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
//     int x = a, y = b;
//     while (y != 0) {
//         temp = y;
//         y = x % y;
//         x = temp;
//     }
//     gcd = x;
//     if (gcd == 1)
//         printf("%d and %d are Co-prime numbers.\n", a, b);
//     else
//         printf("%d and %d are not Co-prime numbers.\n", a, b);
//     return 0;
// }