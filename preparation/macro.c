#include<stdio.h>
#define PI 3.14 // fixed value macro
#define AGE 23 // fixed value macro
#define SQUARE(x) ((x)*(x)) // paramterised macro
#define MAX(a, b) ((a) > (b) ? (a) : (b)) // paramterised macrp
#define MAX(a, b) ((a) > (b) ? (a) : (b)) // paramterised macrp
#define SWAP(a, b) { int temp = a; a = b; b = temp; } // paramterised macro
int main(){
    // print value define by macro
    printf("PI=%.2f\n", PI);

    // print value define by macro
    printf("Age=%d\n", AGE);

    // find square using macro
    printf("Square=%d\n", SQUARE(5));

    // find maximum using macro
    printf("Maximum = %d\n", MAX(20, 70));

    // swap two variable using macro
    int a=10, b=20;
    printf("Before swap: a = %d, b = %d\n", a, b); 
    SWAP(a, b); 
    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}