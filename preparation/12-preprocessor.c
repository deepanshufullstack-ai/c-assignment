// myHeader.h
// put
// #define PI 3.14
// int add(int a, int b){
// return a+b;
// }

#include<stdio.h>
#define PI 3.14
#define MAX 100
#include "myHeader.h"

int main(){
    // conceptual example for preprocessor with macro
    printf("PI=%.2f\n", PI);

    // conceptual example for preprocessor with macro
    int arr[MAX];
    printf("Array size=%d\n", MAX);

    // use add function from another file
    printf("Sum = %d\n", add(10, 20));
    return 0;
}