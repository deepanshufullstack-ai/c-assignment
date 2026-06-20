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