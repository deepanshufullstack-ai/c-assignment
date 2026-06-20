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
// void findPrimeFactors(int num){
    
// }
// int main(){
//     int Num;
//     printf("Enter a number: ");
//     scanf("%d", &Num);
//     findPrimeFactors(Num);
//     return 0;
// }