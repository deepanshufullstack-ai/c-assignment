// all operators in c
#include<stdio.h>
int main(){
    // arithmetic operators
    int a=10, b=3;
    printf("Addition: %d\n", a+b);
    printf("Subtraction: %d\n", a-b);
    printf("Multiplication: %d\n", a*b);
    printf("Devision: %d\n", a/b);
    printf("Remainder: %d\n", a%b);

    // increment and decrement operators
    int c=10;
    printf("Original: %d\n", c);
    printf("Pre increment: %d\n", ++c);
    printf("Post increment: %d\n", c++);

    printf("After post increment: %d\n", c);
    
    printf("Pre decrement: %d\n", --c);
    printf("Post decrement: %d\n", c--);

    printf("After post decrement: %d\n", c);

    // relational operators
    int a1=10, b1=20;
    printf("a>b: %d\n", a1>b1);
    printf("a<b: %d\n", a1<b1);
    printf("a>=b: %d\n", a1>=b1);
    printf("a<=b: %d\n", a1<=b1);
    printf("a==b: %d\n", a1==b1);
    printf("a!=b: %d\n", a1!=b1);

    // logical operators
    int age=20;
    int citizen=1;
    printf("AND: %d\n", age>=18 && citizen==1);
    printf("OR: %d\n", age>=18 || citizen==0);
    printf("NOT: %d\n", !(age>=18));

    // assignment operators
    int a2=10;
    printf("a+=5: %d\n", a2+=5);
    printf("a-=5: %d\n", a2-=5);
    printf("a*=5: %d\n", a2*=5);
    printf("a/=5: %d\n", a2/=5);
    printf("a%=5: %d\n", a2%=5);

    // bitwise operators
    int a3=5, b3=3;
    printf("a&b: %d\n", a3&b3);
    printf("a|b: %d\n", a3|b3);
    printf("a^b: %d\n", a3^b3);
    printf("~a: %d\n", ~a3);
    printf("a<<1: %d\n", a3<<1);
    printf("a>>1: %d\n", a3>>1);
    
    return 0;
}

// conditional statements in c
#include<stdio.h>
int main(){
    // if statement
    int age=20;
    if(age>=18){
        printf("You can vote\n");
    }

    // if-else statement
    int number=10;
    if(number%2==0){
        printf("Even number\n");
    } else {
        printf("Odd number\n");
    }

    // if-else-if ladder
    int marks=75;
    if(marks>=90){
        printf("Grade A++\n");
    } else if(marks>=75){
        printf("Grade A\n");
    } else if(marks>=60){
        printf("Grade B\n");
    } else {
        printf("Grade C\n");
    }

    int age1=20;
    int citizen=1;
    if(age1>=18){
        if(citizen==1){
            printf("You can vote\n");
        }
    }
    return 0;
}

// loops in c
#include<stdio.h>
int main(){
    // for loop
    for(int i=0; i<=5; i++){
        printf("%d\n", i);
    }

    // while loop
    int i=1;
    while(i<=5){
        printf("%d\n", i);
        i++;
    }

    // do while loop
    int i1=1;
    do{
        printf("%d\n", i1);
        i1++;
    } while(i1<=5);

    // infinite loop
    while(1){
        printf("Deepanshu\n");
    }

    for(;;){
        printf("Deepanshu\n");
    }

    // break statement
    for(int i=0; i<=10; i++){
        if(i==5){
            break;
        }
        printf("%d\n", i);
    }

    // continue statement
    for(int i=1; i<=5; i++){
        if(i==3){
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}

// switch case in c
#include<stdio.h>
#define ONE 1
#define TWO 2
int main(){
    // syntax
    switch(expression){
        case value1:
        // code
        break;

        case value2:
        // code
        break;

        case value3:
        // code
        break;

        default:
        // code
    }
    
    // simple example
    int choice=2;
    switch(choice){
        case 1:
        printf("You selected 1");
        break;

        case 2:
        printf("You selected 2");
        break;

        case 3:
        printf("You selected 3");
        break;

        default:
        printf("Invalid selection");
    }

    // default case 
    int choice1=5;
    switch(choice1){
        case 1:
        printf("You selected 1");
        break;

        case 2:
        printf("You selected 2");
        break;

        case 3:
        printf("You selected 3");
        break;

        default:
        printf("Invalid selection");
    }

    // don't use break
    int choice2=2;
    switch(choice2){
        case 1:
        printf("You selected 1");

        case 2:
        printf("You selected 2");

        case 3:
        printf("You selected 3");

        default:
        printf("Invalid selection");
    }

    // multiple cases
    int day=6;
    switch(day){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        printf("Weekday");
        break;

        case 6:
        case 7:
        printf("Weekend");
        break;

        default:
        printf("Invalid day");
        
    }

    // switch with char
    char grade='A';
    switch(grade){
        case 'A':
        printf("Excellent");
        break;

        case 'B':
        printf("Good");
        break;

        default:
        printf("Invalid");
    }

    // switch with macro
    int num=2;
    switch(num){
        case ONE:
        printf("One");
        break;

        case TWO:
        printf("Two");
        break;

        default:
        printf("Invalid");
    }

    // siwtch without default
    int number=3;
    switch(number){
        case 1:
        printf("One");
        break;

        case 2:
        printf("Two");
        break;
    }

    // real life switch case
    int a, b, choice;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("1. Addition");
    printf("2. Subtraction");
    printf("3. Multiplication");
    printf("4. Devision");

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
        printf("Result: %d", a+b);
        break;

        case 2:
        printf("Result: %d", a-b);
        break;

        case 3:
        printf("Result: %d", a*b);
        break;

        case 4:
        printf("Result: %d", a/b);
        break;

        default:
        printf("Invalid case");
    }

    return 0;
}

// function in c
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
































































































































