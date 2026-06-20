// Q1 check whether a given number is positive or not
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     if(n>0){
//         printf("Positive");
//     } else {
//         printf("Not positive");
//     }
//     return 0;
// }

// Q2 check whether a given number is divisible by 5 or not
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     if(n%5==0){
//         printf("Divisble by 5");
//     } else {
//         printf("Not divisble by 5");
//     }
//     return 0;
// }

// Q3 check whether a given number is even or odd
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     if(n%2==0){
//         printf("Even");
//     } else {
//         printf("Odd");
//     }
//     return 0;
// }

// Q4 check whether a given number is even or odd without using %d operator
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     if(n/2*2==0){
//         printf("Even");
//     } else {
//         printf("Odd");
//     }
//     return 0;
// }

// Q5 check whether a given number is even or odd without using bitwise operator
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n&1){
        printf("Odd");
    } else {
        printf("Even");
    }
    return 0;
}