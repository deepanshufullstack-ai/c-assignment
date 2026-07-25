// Q1 calculate sum of n natural numbers
// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     int i = 1;
//     int sum = 0;
//     while (i <= num)
//     {
//         sum = sum + i;
//         i++;
//     }
//     printf("Sum=%d", sum);
//     return 0;
// }

// Q2 calculate sum of first n even natural numbers
// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     int i = 1;
//     int sum=0;
//     while (i<=num)
//     {
//         sum = sum + (i*2);  
//         i++;
//     }
//     printf("Sum=%d", sum);
//     return 0;
// }

// Q3 calculate sum of first n odd natural numbers
// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     int i=1;
//     int sum=0;
//     while (i<=num)
//     {
//         sum = sum + (i*2-1);
//         i++;
//     }
//     printf("Sum=%d", sum);
//     return 0; 
// }

// Q4 calculate sum of squares of first n natural numbers
// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     int i=1;
//     int sum=0;
//     while (i<=num)
//     {
//         sum = sum + (i*i);
//         i++;
//     }
//     printf("Sum=%d", sum);
//     return 0;
// }

// Q5 calculate sum of cubes of first n natural numbers
// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     int i=1;
//     int sum=0;
//     while (i<=num)
//     {
//         sum = sum + (i*i*i);
//         i++;
//     }
//     printf("Sum=%d", sum);
//     return 0;
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void calSumOfNaturals(int n){
    int sum=0;
    for(int i=1; i<=n; i++){
        sum=sum+i;
    }
    printf("Sum is %d", sum);
}
void calSumOfEvenNaturals(int n1){
    int sum=0;
    for(int i=1; i<=n1; i++){
        if(i%2==0){
            sum=sum+i;
        }
    }
    printf("Sum is %d", sum);
}
void calSumOfOddNaturals(int n2){
    int sum=0;
    for(int i=1; i<=n2; i++){
        if(i%2!=0){
            sum=sum+i;
        }
    }
    printf("Sum is %d", sum);
}
void calSumOfSquares(int n3){
    int sum=0;
    for(int i=1; i<=n3; i++){
        sum=sum+i*i;
    }
    printf("Sum is %d", sum);
}
void calSumOfCubes(int n3){
    int sum=0;
    for(int i=1; i<=n3; i++){
        sum=sum+i*i*i;
    }
    printf("Sum is %d", sum);
}
int main(){
    // calSumOfNaturals(5);
    // calSumOfEvenNaturals(5);
    // calSumOfOddNaturals(5);
    // calSumOfSquares(3);
    calSumOfCubes(2);
    return 0;
}








