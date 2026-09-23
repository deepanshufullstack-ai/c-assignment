// switch case in c
#include<stdio.h>
#define ONE 1
#define TWO 2
int main(){
    // syntax
    // switch(expression){
    //     case value1:
    //     break;

    //     case value2:
    //     break;

    //     case value3:
    //     break;

    //     default:
    // }
    
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