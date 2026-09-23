#include<stdio.h>

int calArea(int l, int w); // function declaration
void greet();
void square(int n);
int getNumber();
int add(int a, int b);
void swap(int *a, int *b);
int reverse(int n);

int main(){
    // function syntax
    // return_type function_name(parameter_list){}

    int l=5, w=6, area;
    area=calArea(l, w); // function call
    printf("The area is: %d\n", area);

    greet();

    square(2);

    int x;
    x=getNumber();
    printf("Number is: %d\n", x);

    int sum;
    sum=add(2, 2);
    printf("Sum is: %d\n", sum);

    int x1 = 10;
    int y1 = 20; 
    printf("Before swap: %d %d\n", x1, y1); 
    swap(&x1, &y1); 
    printf("After swap: %d %d", x1, y1);

    int rev;
    rev=reverse(123);
    printf("Rev is: %d\n", rev);
    return 0;
}

// normal function
int calArea(int l, int w){ // function definition
    return l*w;
}

// take nothing, return nothing function
void greet(){
    printf("Hello\n");
}

// take something, return nothing
void square(int n){
    printf("Square is: %d\n", n*n);
}

// take nothing return something
int getNumber(){
    return 100;
}

// take something, return something
int add(int a, int b){
    return a+b;
}

void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int reverse(int n){
    int rev=0;
    while(n!=0){
        rev=rev*10+n%10;
        n=n/10;
    }
    return rev;
}
