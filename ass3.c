// Q1 input a character from the user and print its ASCII code
// #include<stdio.h>
// int main(){
//     char ch;
//     printf("Enter a character: ");
//     scanf("%c", &ch);
//     printf("ASCII code of %c is %d", ch, ch);
//     return 0;
// }

// Q2 input a ASCII code from user and print its character
// #include<stdio.h>
// int main(){
//     int co;
//     printf("Enter ASCII code: ");
//     scanf("%d", &co);
//     printf("Character of this %d is %c", co, co);
//     return 0;
// }

// Q3 input three character from the user and display there ASCII codes
// #include<stdio.h>
// int main(){
//     char a, b, c;
//     printf("Enter three characters: ");
//     scanf("%c, %c, %c", &a, &b, &c);
//     printf("ASCII codes\n");
//     printf("%c = %d\n%c = %d\n%c = %d\n", a, a, b, b, c, c);
//     return 0;
// }

// Q4 print last digit of given number
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     printf("Number last digit is: %d", n%10);
//     return 0;
// }

// Q5 print a number without last digit
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     printf("Number without last digit: %d", n/10);
//     return 0;
// }

////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
void printAsciiCode(char ch) { printf("%d", ch); }
void printAsciiCodeChar(int a) { printf("%c", a); }
void printAsciiCodesForThree(char a, char b, char c) {
  printf("%d\n", a);
  printf("%d\n", b);
  printf("%d", c);
}
void printLastDigitOfNum(int n) {
  int digit = n % 10;
  printf("Last digit is %d", digit);
}
void printWithoutLastDigit(int n) { printf("Without last digit %d", n / 10); }
int main() {
  // char ch;
  // printf("Enter a character: ");
  // scanf("%c", &ch);
  // printAsciiCode(ch);
  // int a;
  // printf("Enter a number: ");
  // scanf("%d", &a);
  // printAsciiCodeChar(a);
  // char a, b, c;
  // printf("Enter three characters: ");
  // scanf("%c%c%c", &a, &b, &c);
  // printAsciiCodesForThree(a, b, c);
  // int n;
  // printf("Enter a number: ");
  // scanf("%d", &n);
  // printLastDigitOfNum(n);
  int m;
  printf("Enter a number: ");
  scanf("%d", &m);
  printWithoutLastDigit(m);
  return 0;
}
