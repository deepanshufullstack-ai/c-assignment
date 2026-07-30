// Q1 display number of days in the month
// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter a month number: ");
//     scanf("%d", &num);
//     switch (num)
//     {
//     case 1:
//     case 3:
//     case 5:
//     case 7:
//     case 8:
//     case 10:
//     case 12:
//         printf("31 days in this month");
//         break;
//     case 4:
//     case 6:
//     case 9:
//     case 11:
//         printf("30 days in this month");
//         break;
//     default:
//         printf("28 or 29 days in this month");
//         break;
//     }
// }

// Q2 menu driven program for +, -, *, /
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int choice, a, b;
//     while (1)
//     {
//         printf("\n1. Addition");
//         printf("\n2. Subtraction");
//         printf("\n3. Multiplication");
//         printf("\n4. Division");
//         printf("\n5. Exit");
//         printf("\n\nEnter your choice: ");
//         scanf("%d", &choice);
//         switch (choice)
//         {
//         case 1:
//             a = 0;
//             b = 0;
//             printf("\nEnter two number: ");
//             scanf("%d%d", &a, &b);
//             printf("Sum=%d", a + b);
//             break;
//         case 2:
//             a = 0;
//             b = 0;
//             printf("\nEnter two number: ");
//             scanf("%d%d", &a, &b);
//             printf("Sub=%d", a - b);
//             break;
//         case 3:
//             a = 0;
//             b = 0;
//             printf("\nEnter two number: ");
//             scanf("%d%d", &a, &b);
//             printf("Mul=%d", a * b);
//             break;
//         case 4:
//             a = 0;
//             b = 0;
//             printf("\nEnter two number: ");
//             scanf("%d%d", &a, &b);
//             printf("Div=%d", a / b);
//             break;
//         case 5:
//             exit(0);
//         default:
//             printf("Invalid choice, retry");
//         }
//     }
// }

// Q3 print day of week using a given number
// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     switch (num)
//     {
//     case 0:
//         printf("Happy Sunday");
//         break;
//     case 1:
//         printf("Happy Monday");
//         break;
//     case 2:
//         printf("Happy Tuesday");
//         break;
//     case 3:
//         printf("Happy Wednesday");
//         break;
//     case 4:
//         printf("Happy Thursday");
//         break;
//     case 5:
//         printf("Happy Friday");
//         break;
//     case 6:
//         printf("Happy Saturday");
//         break;
//     default:
//         break;
//     }
// }

// Q4 find correct triangle
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int choice, a, b, c;
//     while (1)
//     {
//         printf("\n1. Check isosceless triangle");
//         printf("\n2. Check right angled triangle");
//         printf("\n3. Check equilateral triangle");
//         printf("\n4. Exit");
//         printf("\n\nEnter your choice: ");
//         scanf("%d", &choice);
//         switch (choice)
//         {
//         case 1:
//             a = 0;
//             b = 0;
//             c = 0;
//             printf("Enter sides of a triangle");
//             scanf("%d%d%d", &a, &b, &c);
//             if (a + b > c && a + c > b && b + c > a)
//             {
//                 if (a == b || a == c || b == c)
//                 {
//                     printf("Isoscles triangle");
//                 }
//                 else
//                 {
//                     printf("Not isoscles triangle");
//                 }
//             }
//             break;
//         case 2:
//             a = 0;
//             b = 0;
//             c = 0;
//             printf("Enter sides of a triangle");
//             scanf("%d%d%d", &a, &b, &c);
//             if (a + b > c && a + c > b && b + c > a)
//             {
//                 if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
//                 {
//                     printf("Right angle triangle");
//                 }
//                 else
//                 {
//                     printf("Not right angle triangle");
//                 }
//             }
//             break;
//         case 3:
//             a = 0;
//             b = 0;
//             c = 0;
//             printf("Enter sides of a triangle");
//             scanf("%d%d%d", &a, &b, &c);
//             if (a + b > c && a + c > b && b + c > a)
//             {
//                 if (a == b && a == c)
//                 {
//                     printf("Equilateral triangle");
//                 }
//                 else
//                 {
//                     printf("Not equilateral triangle");
//                 }
//             }
//             break;
//         case 4:
//             exit(0);
//         default:
//             printf("/nInvalid choice");
//         }
//     }
// }

// Q5 print a case using switch case
// #include <stdio.h>
// int main()
// {
//     int var;
//     printf("Enter a number: ");
//     scanf("%d", &var);
//     switch (var)
//     {
//     case 1:
//         printf("Good");
//         break;
//     case 2:
//         printf("Better");
//         break;
//     case 3:
//         printf("Best");
//         break;
//     default:
//         printf("Invalid");
//     }
// }



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
void printMonthDays(int n){
    switch(n){
        case 1:
        printf("31 days");
        break;
        case 2:
        printf("28 or 29 days");
        break;
        case 3: 
        printf("31 days");
        break;
        case 4:
        printf("30 days");
        break;
        case 5:
        printf("31 days");
        break;
        case 6:
        printf("30 days");
        break;
        case 7:
        printf("31 days");
        break;
        case 8: 
        printf("31 days");
        break;
        case 9:
        printf("30 days");
        break;
        case 10:
        printf("31 days");
        break;
        case 11:
        printf("30 days");
        break;
        case 12:
        printf("31 days");
        break;
        default: 
        printf("Invalid month");
    }
}
void calculator(){
    int a, b, c;
    while(1){
        printf("\n1. Addition");
        printf("\n2. Subtraction ");
        printf("\n3. Multiplication");
        printf("\n4. Devision");
        printf("\n5. Exit");
        
        printf("\n\nEnter your choice: ");
        scanf("%d", &c);
        
        switch(c){
            case 1: 
            a=0, b=0;
            printf("Enter two number: ");
            scanf("%d%d", &a, &b);
            printf("Addition is %d\n", a+b);
            break;
            
            case 2:
            a=0, b=0;
            printf("Enter two number: ");
            scanf("%d%d", &a, &b);
            printf("Subtraction is %d\n", a-b);
            break;
            
            case 3: 
            a=0, b=0;
            printf("Enter two number: ");
            scanf("%d%d", &a, &b);
            printf("Multiplication is %d\n", a*b);
            break;
            
            case 4:
            a=0, b=0;
            printf("Enter two number: ");
            scanf("%d%d", &a, &b);
            printf("Devision is %d\n", a/b);
            break;
            
            case 5:
            exit(0);
            
            default: 
            printf("Invalid case");
            
        }
    }
}
void greetWithDay(int n1){
    switch(n1){
        case 1:
        printf("Happy monday");
        break;
        
        case 2:
        printf("Namaste tuesday");
        break;
        
        case 3:
        printf("Jai shree ganesh");
        break;
        
        case 4:
        printf("Good Morning");
        break;
        
        case 5:
        printf("Weekend ki khushboo");
        break;
        
        case 6:
        printf("Jai shanidev");
        break;
        
        case 7:
        printf("So jao aaj to");
        break;
        
        default: 
        printf("Invalid case");
    }
}
void newCalculator(){
    int n, a, b, c;
    while(1){
        printf("\n\n1. Check isosceles triangle");
        printf("\n2. Check right angle triangle");
        printf("\n3. Check equiletral triangle");
        printf("\n4. Exit");
        
        printf("\n\nEnter your choice: ");
        scanf("%d", &n);
        
        switch(n){
            case 1:
            a=0, b=0, c=0;
            printf("Enter sides of triangle: ");
            scanf("%d%d%d", &a, &b, &c);
            if(a+b>c && b+c>a && c+a>b){
                if(a==b || a==c || b==c){
                    printf("Its isosceles triangle");
                } else {
                    printf("Its not isosceles triangle");
                }
            }
            break;
            
            case 2:
            a=0, b=0, c=0;
            printf("Enter sides of triangle: ");
            scanf("%d%d%d", &a, &b, &c);
            if(a+b>c && b+c>a && c+a>b){
                if(a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a){
                    printf("Its right angle triangle");
                } else {
                    printf("Its not right angle triangle");
                }
            }
            break;
            
            case 3:
            a=0, b=0, c=0;
            printf("Enter sides of triangle: ");
            scanf("%d%d%d", &a, &b, &c);
            if(a+b>c && b+c>a && c+a>b){
                if(a==b && a==c){
                    printf("Its equiletral triangle");
                } else {
                    printf("Its not equiletral triangle");
                }
            }
            break;
            
            case 4:
            exit(0);
            
            default:
            printf("Invalid case");
        }
    }
}
void status(int n2){
    switch(n2){
        case 1:
        printf("Good");
        break;
        
        case 2:
        printf("Better");
        break;
        
        case 3:
        printf("Best");
        break;
        
        default:
        printf("Invalid");
    }
}
int main() {
    // int n;
    // printf("Enter a number of month: ");
    // scanf("%d", &n);
    // printMonthDays(n);
    // calculator();
    // int n1;
    // printf("Enter a number of week: ");
    // scanf("%d", &n1);
    // greetWithDay(n1);
    // newCalculator();
    int n2;
    printf("Enter a number: ");
    scanf("%d", &n2);
    status(n2);
    return 0;
}