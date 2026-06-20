
// #include<stdio.h>
// int main (){
//     int num, d1, d2, d3, sum;
//     printf("Enter a three digit number:");
//     scanf("%d", &num);
//     d1 = num/100;
//     d2 = (num / 10) % 10;
//     d3 = (num % 10);
//     sum = d1 + d2 + d3;
    
//     printf("Sum of digits: %d\n", sum);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char ch = '+';
//     printf("ASCII code of '%c' = %d\n", ch, ch);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int i;
//     float f;
//     char c;
//     double d;
//     printf("Size of int: %zu bytes\n", sizeof(i));
//     printf("Size of float: %zu bytes\n", sizeof(f));
//     printf("Size of char: %zu bytes\n", sizeof(c));
//     printf("Size of double: %zu bytes\n", sizeof(d));
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter a number: ");
//     scanf("%d", &x);
//     x = (x/10)*10;
//     printf("After making last digit zero: %d\n", x);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int number, digit, result;
//     printf("Enter a number: ");
//     scanf("%d", &number);
//     printf("Enter a digit to append: ");
//     scanf("%d", &digit);
//     result = (number * 10) + digit;
//     printf("Resulting number: %d\n", result);
//     return 0;
// }










// Q1 input three digit number and display the sum of the digits
// #include<stdio.h>
// int main(){
//     int num, v1, v2, v3, sum;
//     printf("Enter a number of three digit: ");
//     scanf("%d", &num);
//     v1=num/100;
//     v2=(num/10)%10;
//     v3=(num%10);
//     sum=v1+v2+v3;
//     printf("%d+%d+%d=%d", v1, v2, v3, sum);
//     return 0;
// }

// Q2 find ASCII cod of +
// #include<stdio.h>
// int main(){
//     char ch='+';
//     printf("ASCII code for + is %d", ch);
//     return 0;
// }

// Q3 print size of int, float, char & double type variable
// #include<stdio.h>
// int main(){
//     int a;
//     char b;
//     float c;
//     double d;
//     printf("Size of int type varible is: %zu\n", sizeof(a));
//     printf("Size of int type varible is: %zu\n", sizeof(b));
//     printf("Size of int type varible is: %zu\n", sizeof(c));
//     printf("Size of int type varible is: %zu\n", sizeof(d));
//     return 0;
// }

// Q4 make last digit of number is zero
// #include<stdio.h>
// int main(){
//     int n, x;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     x=n/10;
//     x=x*10;
//     printf("%d change to %d",n, x);
//     return 0;
// }

// Q5 append a digit in a number at the last
// #include<stdio.h>
// int main(){
//     int n, d, r;
//     printf("Enter a number or a digit: ");
//     scanf("%d%d",&n, &d);
//     r=(n*10)+d;
//     printf("before append a digit %d\nafter append a digit %d", n, r);
//     return 0;
// }
