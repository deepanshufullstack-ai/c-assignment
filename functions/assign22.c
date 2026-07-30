// Q1 calculate factorial of a number (TSRS)
// #include<stdio.h>
// int calculateFactorialOfNumber(int num){
//     int i=1, factorial=1;
//     while(i<=num){
//         factorial=factorial*i;
//         i++;
//     }
//     return factorial;
// }
// int main(){
//     int Num, Factorial;
//     printf("Enter a number: ");
//     scanf("%d", &Num);
//     Factorial=calculateFactorialOfNumber(Num);
//     printf("Factorial is %d", Factorial);
//     return 0;
// }

// Q4 whether a given number contains a given digit or not (TSRS)
// #include <stdio.h>
// int findDigit(int num, int digit)
// {
//     int lastDigit = 0;
//     while (num > 0)
//     {
//         lastDigit = num % 10;
//         if (lastDigit == digit)
//         {
//             return 1;
//         }

//         num = num / 10;
//     }
// }
// int main()
// {
//     int Num, Digit, Value;
//     printf("Enter a number: ");
//     scanf("%d", &Num);
//     printf("Enter a digit: ");
//     scanf("%d", &Digit);
//     Value = findDigit(Num, Digit);
//     if (Value)
//     {
//         printf("Contains a digit");
//     }
//     else
//     {
//         printf("Not contains a digit");
//     }
//     return 0;
// }

// Q5 print all prime factors of a given number
// #include<stdio.h>
// void primeFactors(int n){
//     int i;
//     for(i=2; i<=n; i++){
//         while(n%i==0){
//             printf("%d", i);
//             n=n/i;
//         }
//     }
// }
// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     primeFactors(num);
//     return 0;
// }


///////////////////////////////////////////////////////////////////////////
#include <stdio.h>
int calFact(int n){
    int f=1;
    while(n>0){
        f=f*n;
        n--;
    }
    return f;
}

int digitIsAvailableOrNot(int n1, int d){
    int d1;
    while(n1>0){
        d1=n1%10;
        n1=n1/10;
        if(d1==d){
            return 1;
        }
    }
    return 0;
}

int printAllPrimeFact(int n){
    for(int i=2; i<=n; i++){
        while(n%i==0){
            printf("%d\n", i);
            n=n/i;
        }
    }
}
int main() {
    // int n;
    // printf("Enter a number: ");
    // scanf("%d", &n);
    // printf("%d", calFact(n));
    
    // int n1, d;
    // printf("Enter a number or a digit: ");
    // scanf("%d%d", &n1, &d);
    // printf("%d", digitIsAvailableOrNot(n1, d));
    
    int n2;
    printf("Enter a number: ");
    scanf("%d", &n2);
    printAllPrimeFact(n2);
    return 0;
}