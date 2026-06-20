// Q1 calculate factorial of n numbers
// #include<stdio.h>
// int main(){
//     int n, f=1, i;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     for(i=1; i<=n; i++){
//         f=f*i;
//     }
//     printf("Factorial is %d", f);
//     return 0;
// }

// Q2 count digit in a given number
// #include<stdio.h>
// int main(){
//     int n, count = 0;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     while(n){
//         n=n/10;
//         count++;
//     }
//     printf("Count = %d", count);
//     return 0;
// }

// Q3 whether the given number is prime or not
// #include <stdio.h>
// int main()
// {
//     int n, i;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     for (i = 2; i <= n - 1; i++)
//         if (n % i == 0)
//             break;

//     if (i == n)
//         printf("Prime");
//     else
//         printf("Not prime");

//     return 0;
// }

// Q4 calculate LCM of 2 numbers
// #include <stdio.h>
// int main()
// {
//     int a, b, l;
//     printf("Enter two numbers: ");
//     scanf("%d%d", &a, &b);

//     for (l = a > b ? a : b; l <= a * b; l++)
//         if (l % a == 0 && l % b == 0)
//             break;
//     printf("LCM is %d", l);
//     return 0;
// }

// Q5 reverse a given number
// #include <stdio.h>
// int main()
// {
//     int n, r=0;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     while (n)
//     {
//         r=r*10+n%10;
//         n=n/10;

//     }
//     printf("%d",r);
    
//     return 0;
// }