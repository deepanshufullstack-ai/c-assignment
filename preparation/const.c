#include<stdio.h>
int main(){
    const int age=23;
    printf("Age=%d\n", age);
    // age=20 // error

    const int x;
    // x=10; // error

    const int a=10;
    const float b=20.2;
    const char c='A';
    printf("%d\n", a); 
    printf("%.2f\n", b);
    printf("%c\n", c);

    // pointer to const
    int x1=20;
    int x2=30;
    
    const int *ptr=&x1;
    // int const *ptr
    printf("%d\n", *ptr);
    // *p=50; // error
    ptr=&x2;
    printf("%d\n", *ptr);

    // const pointer
    int y1=20;
    int y2=30;
    int * const ptr1=&y1;
    *ptr1=50; // allowed
    printf("%d\n", y1);
    // p=&y // error

    // both pointer and value are constant
    int a1=10;
    int b1=20;
    const int * const ptr2=&a1;
    // *p=50; // error
    // p=&y // error
    printf("%d\n", *ptr2);
    return 0;
}