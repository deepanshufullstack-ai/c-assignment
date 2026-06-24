// Q1 find the nth term of fibonacci series
// #include <stdio.h>
// int main()
// {
//     int n, i;
//     int a = 0, b = 1, c;
//     printf("Enter a value of n: ");
//     scanf("%d", &n);

//     if (n == 1)
//     {
//         printf("the %dth fibonacci term is %d\n", n, a);
//     }
//     else if (n == 2)
//     {
//         printf("the %dth fibonacci term is %d\n", n, a);
//     }
//     else
//     {
//         for (i = 3; i <= n; i++)
//         {
//             c = a + b;
//             printf("c=%d\n", c);
//             a = b;
//             printf("a=%d\n", a);
//             b = c;
//             printf("b=%d\n\n", b);
//         }
//         printf("the %d is fibonacci number is %d\n", n, b);
//     }
//     return 0;
// }

// Q2 print first n term of fibonacci series
// #include<stdio.h>
// int main(){
//     int n, i;
//     int a=0, b=1, c;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);
//     for(i=1; i<=n; i++){
//         printf("%d\n", a);
//         c=a+b;
//         a=b;
//         b=c;
//     }
//     return 0;
// }

// Q3 given number is in fibonacci series or not
// #include<stdio.h>
// int main(){
//     int n, i;
//     int a=0, b=1, c;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     if(n==0 || n==1){
//         printf("%d is a fibonacci number\n", n);
//         return 0;
//     }

//     while(b<n){
//         c=a+b;
//         a=b;
//         b=c;
//     }

//     if(b==n){
//         printf("%d is a fibonacci number", n);
//     } else {
//         printf("%d is not a fibonacci number", n);
//     }
//     return 0;
// }

// Q4 check whether the given number is armstrong or not
// #include <stdio.h>
// int main() {
//   int num, digit, sum = 0, temp;
//   printf("Enter a three digit number to find is armstrong or not: ");
//   scanf("%d", &num);
//   temp = num;
//   while (temp > 0) {
//     digit = temp % 10;
//     printf("digit=%d\n", digit);
//     sum = sum + digit * digit * digit;
//     printf("sum=%d\n", sum);
//     temp = temp / 10;
//     printf("num=%d\n\n", temp);
//   }
//   if (num == sum) {
//     printf("%d is armstrong", sum);
//   } else {
//     printf("%d is not armstrong", sum);
//   }
//   return 0;
// }

// Q5 print all armstrong under 1000
// #include<stdio.h>
// int main(){
//     int num, temp, sum, digit;
//     for(num=1; num<=1000; num++){
//         temp=num;
//         sum=0;
//         while(temp>0){
//             digit=temp%10;
//             sum=sum+digit*digit*digit;
//             temp=temp/10;
//         }

//         if(sum==num){
//             printf("%d ", num);
//         }
//     }
//     return 0;
// }