#include <stdio.h>
int main() {
  // arithmetic operators
  int a = 10, b = 3;
  printf("Addition: %d\n", a + b);
  printf("Subtraction: %d\n", a - b);
  printf("Multiplication: %d\n", a * b);
  printf("Devision: %d\n", a / b);
  printf("Remainder: %d\n", a % b);

  // increment and decrement operators
  int c = 10;
  printf("Original: %d\n", c);
  printf("Pre increment: %d\n", ++c);
  printf("Post increment: %d\n", c++);

  printf("After post increment: %d\n", c);

  printf("Pre decrement: %d\n", --c);
  printf("Post decrement: %d\n", c--);

  printf("After post decrement: %d\n", c);

  // relational operators
  int a1 = 10, b1 = 20;
  printf("a>b: %d\n", a1 > b1);
  printf("a<b: %d\n", a1 < b1);
  printf("a>=b: %d\n", a1 >= b1);
  printf("a<=b: %d\n", a1 <= b1);
  printf("a==b: %d\n", a1 == b1);
  printf("a!=b: %d\n", a1 != b1);

  // logical operators
  int age = 20;
  int citizen = 1;
  printf("AND: %d\n", age >= 18 && citizen == 1);
  printf("OR: %d\n", age >= 18 || citizen == 0);
  printf("NOT: %d\n", !(age >= 18));

  // assignment operators
  int a2 = 10;
  printf("a+=5: %d\n", a2 += 5);
  printf("a-=5: %d\n", a2 -= 5);
  printf("a*=5: %d\n", a2 *= 5);
  printf("a/=5: %d\n", a2 /= 5);
  printf("a%=5: %d\n", a2 %= 5);

  // bitwise operators
  int a3 = 5, b3 = 3;
  printf("a&b: %d\n", a3 & b3);
  printf("a|b: %d\n", a3 | b3);
  printf("a^b: %d\n", a3 ^ b3);
  printf("~a: %d\n", ~a3);
  printf("a<<1: %d\n", a3 << 1);
  printf("a>>1: %d\n", a3 >> 1);

  return 0;
}