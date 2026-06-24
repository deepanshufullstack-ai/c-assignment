// Q1 find the nth term of the fibonacci series
// #include<stdio.h>
// int main(){
//     int a=-1, b=1, c, n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     while (n)
//     {
//         c=a+b;
//         a=b;
//         b=c;
//         n--;
//     }
//     printf("%d", c);
//     printf("\n");
//     return 0;
// }

// Q2 first n terms of fabonacci series
// #include<stdio.h>
// int main(){
//     int a=-1, b=1, c, n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     while (n)
//     {
//         c=a+b;
//         printf("%d", c);
//         a=b;
//         b=c;
//         n--;
//     }
//     printf("\n");
//     return 0;
// }

// Q3 check whether a given number is there in the fibonacci series or not
// #include<stdio.h>
// int main(){
//     int a=-1, b=1, c, num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     while (1)
//     {
//         c=a+b;
//         if(c>=num){
//             break;
//         }
//         a=b;
//         b=c;
//     }
// if(c==num){
//     printf("%d is in the series", num);
// }
// else {
//     printf("%d is not in the series", num);
// }
//     printf("\n");
//     return 0;
// }

// Q4 check whether a given number is an armstrong number or not
// #include<stdio.h>
// int main(){
//     int num, x, digits;
//     printf("Enter a number: ");
//     scanf("%d", num);
//     x=num;

//     for(digits=0; x; x=x/10)
//     digits++;
// }

// Q5 print all armstrong under 1000

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