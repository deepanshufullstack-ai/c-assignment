// Q1 calculate factorial of a number
// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     int factorial=1;
//     while(num>=1){
//         factorial=factorial*num;
//         num--;
//     }
//     printf("Factorial=%d", factorial);
//     return 0;
// }

// Q2 count digit in a given number
// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     int count=0;
//     int digit=0;
//     while(num>0){
//         digit=num%10;
//         printf("Digit is %d\n", digit);
//         num=num/10;
//         count++;
//     }
//     printf("Digits count is %d", count);
//     return 0;
// }

// Q3 given number is prime or not
// #include<stdio.h>
// int main(){
//     int num, i;
//     printf("Enter a number: ");
//     scanf("%d", &num);
    
//     for(i=2; i<num; i++){
//         if(num%i==0){
//             printf("%d is a not prime number", num);
//             break;
//         } else {
//             printf("%d is a prime number", num);
//             break;;
//         }
//     }
//     return 0;
// }

// Q4 calculate LCM of two numbers
// #include<stdio.h>
// int main(){
//     int num1, num2, max;
//     printf("Enter two numbers: ");
//     scanf("%d%d", &num1, &num2);
//     max=(num1>num2)? num1 : num2;
//     while (1)
//     {
//         if(max%num1==0 && max%num2==0){
//             printf("The lcm of %d and %d is %d\n", num1, num2, max);
//             break;
//         }
//         max++;
//     }    
//     return 0;
// }

// Q5 reverse a given number
// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     int digit=0;
//     int reverse=0;
//     while(num>0){
//         digit=num%10;
//         printf("digit=%d\n", digit);
//         num=num/10;
//         printf("num=%d\n", num);
//         reverse=reverse*10+digit;
//         printf("reverse=%d\n\n", reverse);
//     }
//     printf("Reverse=%d", reverse);
//     return 0;
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void calFac(int n){
    // int fact=1;
    // for(int i=1; i<=n; i++){
    //     fact=fact*i;
    // }
    
    int fact=1;
    for(int i=n; i>=1; i--){
        fact=fact*i;
    }
    printf("Factorial is %d", fact);
}

void countDigit(int n){
    int count=0, digit=0;
    
    while(n>0){
        digit=n%10;
        n=n/10;
        count++;
    }
    
    printf("Digits is %d", count);
}

void primeOrNot(int n2){
    int flag=1;
    for(int i=2; i<n2; i++){
        if(n2%i==0){
            flag=0;
            break;
        }
    }
    
    if(flag){
        printf("Prime number");
    } else {
        printf("Not prime number");
    }
}

void lcmOfTwoNumbers(int a, int b){
    int max=0;
    max=(a>b) ? a : b;
    while(1){
        if(max%a==0 && max%b==0){
            printf("The lcm of a & b is %d", max);
            break;
        }
        max++;
    }
}

void reverseTheNumber(int n3){
    int rev=0, dig=0;
    while(n3>0){
        dig=n3%10;
        n3=n3/10;
        rev=rev*10+dig;
    }
    printf("Reverse is %d", rev);
}
int main(){
    // int n;
    // printf("Enter a number: ");
    // scanf("%d", &n);
    // calFac(n);
    // int n1;
    // printf("Enter a number: ");
    // scanf("%d", &n1);
    // countDigit(n1);
    // int n2;
    // printf("Enter a number: ");
    // scanf("%d", &n2);
    // primeOrNot(n2);
    // int a, b;
    // printf("Enter two numbers: ");
    // scanf("%d%d", &a, &b);
    // lcmOfTwoNumbers(a, b);
    int n3;
    printf("Enter a number: ");
    scanf("%d", &n3);
    reverseTheNumber(n3);
    return 0;
}



































