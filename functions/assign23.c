
// Q1 calculate lcm of two numbers (TSRS)
// #include <stdio.h>
// int findLcm(int a1, int a2) {
//   int max;
//   max = a1 > a2 ? a1 : a2;
//   while (1) {
//     if (max % a1 == 0 && max % a2 == 0) {
//       return max;
//     }
//   }
//   return 0;
// }
// int main() {
//   int n1, n2;
//   printf("Enter two numbers to find LCM: ");
//   scanf("%d%d", &n1, &n2);
//   int lcm;
//   lcm = findLcm(n1, n2);
//   printf("LCM is %d", lcm);
//   return 0;
//   ;
// }

// Q2 calulate hcf of two numbers (TSRS)
// #include<stdio.h>
// int findHCF(int n1, int n2){
//     int i, hcf;
//     for(i=1; i<=n1 && i<=n2; i++){
//         if(n1%i==0 && n2%i==0){
//             hcf=i;
//         }
//     }
//     return hcf;
// }
// int main(){
//     int a, b;
//     printf("Enter two numbers: ");
//     scanf("%d%d", &a, &b);
//     int HCF=0;
//     HCF=findHCF(a, b);
//     printf("HCF is %d", HCF);
//     return 0;
// }

// Q3 given number is prime or not (TSRS)
// #include<stdio.h>
// int findPrime(int n){
//     int i;
//     for(int i=2; i<n; i++){
//         if(n%i==0){
//             return 0;
//         } else {
//             return 1;
//         }
//     }
// }
// int main(){
//     int num, isPrime;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     isPrime=findPrime(num);
//     printf("%d", isPrime);
//     printf(isPrime == 1 ? "Prime number" : "Not prime");
//     return 0;
// }

// Q4 check next prime number of given number (TSRS)
// #include<stdio.h>
// int nextPrime(int n){
//     int i, j;
    
//     for(i=n+1; ; i++){
//         for(j=2; j<i; j++){
//             if(i%j==0){
//                 break;
//             }
//         }
//         if(j==i){
//             return i;
//         }
//     }
// }
// int main(){
//     int num, value;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     value=nextPrime(num);
//     printf("Next prime is %d", value);
//     return 0;
// }

// Q5 print n prim numbers (TSRN)
// #include<stdio.h>
// void findNPrimes(int n){
//     int count=0, num=2, i, isPrime;
//     while(count<n){
//         isPrime=1;
//         for(i=2; i<=num/2; i++){
//             if(num%i==0){
//                 isPrime=0;
//                 break;
//             }
//         }
//         if(isPrime){
//             printf("%d\n", num);
//             count++;
//         }
//         num++;
//     }
// }
// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     findNPrimes(num);
//     return 0;
// }