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

/////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void printAllPrimeUnder100(){
    int prime;
    for(int i=2; i<=100; i++){
        prime=1;
        for(int j=2; j<i; j++){
            if(i%j==0){
                prime=0;
                break;
            }
        }
        if(prime){
            printf("%d\n", i);
        }
    }
}

void printPrimeBtwTwoNumbers(int a, int b){
    int prime;
    for(int i=a; i<=b; i++){
        prime=1;
        for(int j=2; j<i; j++){
            if(i%j==0){
                prime=0;
                break;
            }
        }
        if(prime){
            printf("%d\n", i);
        }
    }
}
void findNextPrime(int n){
    int prime;
    for(int i=n+1; ; i++){
        prime=1;
        for(int j=2; j<i; j++){
            if(i%j==0){
                prime=0;
                break;
            }
        }
        if(prime){
            printf("%d", i);
            break;
        }
    }
}
void calHcf(int a1, int b1){
    int temp;
    while(b1!=0){
        temp=b1;
        b1=a1%b1;
        a1=temp;
    }
    printf("HCF = %d\n", a1);
}
void checkCoPrime(int a2, int b2){
    int temp, x=a2, y=b2, gcd;
    while(y!=0){
        temp=y;
        y=x%y;
        x=temp;
    }
    gcd=x;
    if(gcd==1){
        printf("Coprime number");
    } else {
        printf("No coprime number");
    }
}
int main(){
    // printAllPrimeUnder100();
    // int a,b;
    // printf("Enter two numbers: ");
    // scanf("%d%d", &a, &b);
    // printPrimeBtwTwoNumbers(a, b);
    // int n;
    // printf("Enter a number: ");
    // scanf("%d", &n);
    // findNextPrime(n);
    // int a1, b1;
    // printf("Enter two numbers: ");
    // scanf("%d%d", &a1, &b1);
    // calHcf(a1, b1);
    int a2, b2;
    printf("Enter two numbers: ");
    scanf("%d%d", &a2, &b2);
    checkCoPrime(a2, b2);
    return 0;
}

