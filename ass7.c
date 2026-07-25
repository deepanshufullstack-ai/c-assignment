// Q1 check whether a given number is positive or non positive
// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     if(num>0){
//         printf("Positive");
//     } else {
//         printf("Non positive");
//     }
//     return 0;

// }

// Q2 check whether a given number is divisible by 5 or not
// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     if(num%5==0){
//         printf("Number divisible by 5");
//     } else {
//         printf("Not divisible by 5");
//     }
//     return 0;
// }

// Q3 check whether a given number is an even or an odd number
// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     if(num%2==0){
//         printf("Number is even");
//     } else {
//         printf("Number is odd");
//     }
//     return 0;
// }

// Q4 check whether a given number is even or odd without using % operator
// #include<stdio.h>
// int main(){
//     float num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     if(num/2*2==num){
//         printf("Even number");
//     } else {
//         printf("Odd number");
//     }
//     return 0;
// }

// Q5 check whether a given number is even or odd using bitwise operator
// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     if(num&1){
//         printf("Odd number");
        
//     } else {
//         printf("Even number");
//     }
//     return 0;
// }


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void checkNumIsPosAndNeg(int n){
    if(n>0){
        printf("Number is positive");
    } else {
        printf("Number is Negative");
    }
}
void checkDivByFive(int n1){
    if(n1%5==0){
        printf("Divisible by 5");
    } else {
        printf("Not divisible by 5");
    }
}
void checkEvenOrOdd(int n2){
    if(n2%2==0){
        printf("Number is even");
    } else {
        printf("Number is odd");
    }
}
void checkEvenOrOddWithoutModule(int n3){
    if(n3/2*2==n3){
        printf("Number is even");
    } else {
        printf("Number is odd");
    }
}
void checkEvenOrOddUsingBitwise(int n4){
    if(n4&1){
        printf("Number is odd");
    } else {
        printf("Number is even");
    }
}

int main(){
    // int n;
    // printf("Enter a number: ");
    // scanf("%d", &n);
    // checkNumIsPosAndNeg(n);
    // int n1;
    // printf("Enter a number: ");
    // scanf("%d", &n1);
    // checkDivByFive(n1);
    // int n2;
    // printf("Enter a number: ");
    // scanf("%d", &n2);
    // checkEvenOrOdd(n2);
    // int n3;
    // printf("Enter a number: ");
    // scanf("%d", &n3);
    // checkEvenOrOddWithoutModule(n3);
    int n4;
    printf("Enter a number: ");
    scanf("%d", &n4);
    checkEvenOrOddUsingBitwise(n4);
    return 0;
}