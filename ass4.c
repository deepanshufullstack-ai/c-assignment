// Q1 calculate size of a character constant
// #include<stdio.h>
// int main(){
//     char ch='a';
//     printf("Size of %zu bytes", sizeof(ch));
//     return 0;
// }

// Q2 calculate size of a real constant
// #include<stdio.h>
// int main(){
//     float num=3.14;
//     printf("Size of real constant is %zu bytes", sizeof(num));
//     return 0;
// }

// Q3 change the value of variable from 'A' to 'B
// #include<stdio.h>
// int main(){
//     char ch='A';
//     printf("Before value: %c\n", ch);
//     ch++;
//     printf("After value: %c\n", ch);
//     return 0;
// }

// Q4 swap two numbers using third variable
// #include<stdio.h>
// int main(){
//     int a=2, b=4, temp;
//     printf("Before swap: %d, %d\n", a, b);
//     temp=a;
//     a=b;
//     b=temp;
//     printf("After swap: %d, %d\n", a, b);
//     return 0;
// }

// Q5 swap two numbers without using third variable
// #include<stdio.h>
// int main(){
//     int a=2, b=4;
//     printf("Before swap: %d, %d\n", a, b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("After swap: %d, %d\n", a, b);
//     return 0;
// }

// Q6 swap two numbers without using third variable & (+ -) operators
// #include<stdio.h>
// int main(){
//     int a=2, b=4;
//     printf("Before swap: %d, %d\n", a, b);
//     a=a*b;
//     b=a/b;
//     a=a/b;
//     printf("After swap: %d, %d\n", a, b);
//     return 0;
// }

// Q7 swap two numbers without using third variable & (* /) operators
// #include<stdio.h>
// int main(){
//     int a=2, b=4;
//     printf("Before swap: %d, %d\n", a, b);
//     a=a^b;
//     b=a^b;
//     a=a^b;
//     printf("After swap: %d, %d\n", a, b);
//     return 0;
// }

// Q8 swap to numbers in a single line arithmetic expression
// #include<stdio.h>
// int main(){
//     int a=2, b=4;
//     printf("Before swap: %d, %d\n", a, b);
//     a=(b-a)+(b=a);
//     printf("After swap: %d, %d", a, b);
//     return 0;
// }

///////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
void sizeOfChar(char ch) { printf("%zu is the size of %c", sizeof(ch), ch); }
void sizeOfReal(float f) { printf("%zu is the size of %f", sizeof(f), f); }
void swap(int a, int b) {
  // method 1
  // int temp;
  // printf("Before swap: %d %d\n", a, b);
  // temp=a;
  // a=b;
  // b=temp;
  // printf("After swap: %d %d", a, b);

  // method 2
  // printf("Before swap: %d %d\n", a, b);
  // a=a+b;
  // b=a-b;
  // a=a-b;
  // printf("After swap: %d %d\n", a, b);

  // method 3
  // printf("Before swap: %d %d\n", a, b);
  // a=a*b;
  // b=a/b;
  // a=a/b;
  // printf("After swap: %d %d\n", a, b);

  // method 4
  // printf("Before swap: %d %d\n", a, b);
  // a=a^b;
  // b=a^b;
  // a=a^b;
  // printf("After swap: %d %d\n", a, b);

  // method 5
  printf("Before swap: %d %d\n", a, b);
  a = (b - a) + (b = a);
  printf("After swap: %d %d\n", a, b);
}
int main() {
  // char ch='c';
  // sizeOfChar(ch);
  // float f=34.00;
  // sizeOfReal(f);
  // char ch='A';
  // printf("Before increment %c\n", ch);
  // ch++;
  // printf("After increment %c", ch);
  // int a, b;
  // printf("Enter two number: ");
  // scanf("%d%d", &a, &b);
  // swap(a, b);
  return 0;
}
