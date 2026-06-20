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
#include<stdio.h>
int main(){
    int num, x, digits;
    printf("Enter a number: ");
    scanf("%d", num);
    x=num;

    for(digits=0; x; x=x/10)
    digits++;




}

// Q5 print all armstrong under 1000

