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

/////////////////////////////////////////////////
#include<stdio.h>
void sumOfDigit(int n){
    int d1, d2, d3, temp=n;
    d1=n%10;
    n=n/10;
    d2=n%10;
    n=n/10;
    d3=n%10;
    printf("Sum is %d", d1+d2+d3);
}
void sizeOfDataTypes(int a, char b, float c, double d){
    printf("%zu is the size of %d\n", sizeof(a), a);
    printf("%zu is the size of %c\n", sizeof(b), b);
    printf("%zu is the size of %f\n", sizeof(c), c);
    printf("%zu is the size of %lf\n", sizeof(d), d);
}
void makeNumberLastDigitZero(int n){
    int x;
    x=n/10;
    x=x*10;
    printf("Number with zero digit %d", x);
}
void appendADigit(int n2, int d1){
    int result = n2 * 10 + d1;
    printf("Result after appending digit: %d", result);
}
int main(){
    // int n;
    // printf("Enter a number: ");
    // scanf("%d", &n);
    // sumOfDigit(n);
    // char ch='+';
    // printf("%d", ch);
    // int a=1;
    // char b='a';
    // float c=2.0;
    // double d=3.0;
    // sizeOfDataTypes(a, b, c, d);
    // int n1;
    // printf("Enter a number: ");
    // scanf("%d", &n1);
    // makeNumberLastDigitZero(n1);
    int n2, d1;
    printf("Enter a number & a digit: ");
    scanf("%d%d", &n2, &d1);
    appendADigit(n2, d1); 
    return 0;
}





















