// Q1 print deepanshu n times
// #include<stdio.h>
// int main(){
//     int i=1, num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     while(i<=num){
//         printf("Deepanshu\n");
//         i++;
//     }
//     return 0;
// }

// Q2 print first n natural number
// #include<stdio.h>
// int main(){
//     int i=1, num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     while(i<=num){
//         printf("%d\n", i);
//         i++;
//     }
//     return 0;
// }

// Q3 print first n natural numbers in reverse
// #include<stdio.h>
// int main(){
//     int i=1, num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     while(i<=num){
//         printf("%d\n", num+1-i);
//         i++;
//     }
// }


// Q4 print first n odd natural numbers
// #include<stdio.h>
// int main(){
//     int i=1, num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     while(i<=num){
//         printf("%d\n", i*2-1);
//         i++;
//     }
//     return 0;
// }

// Q5 print first n odd natural numbers in reverse
// #include<stdio.h>
// int main(){
//     int i=1, num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     while(i<=num){
//         printf("%d\n", 2*num+1-2*i);  
//         i++;
//     }
//     return 0;
// }

// Q6 print first n even natural numbers
// #include<stdio.h>
// int main(){
//     int i=1, num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     while (i<=num)
//     {
//         printf("%d\n", 2*i);
//         i++;
//     }
//     return 0;
// }

// Q7 print first n even natural numbers in reverse
// #include<stdio.h>
// int main(){
//     int i=1, num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     while(i<=num){
//         printf("%d\n", num*2); 
//         num--;
//     }
//     return 0;
// }

// Q8 print squares of the first n natural numbers
// #include<stdio.h>
// int main(){
//     int i=1, num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     while (i<=num)
//     {
//         printf("%d\n", i*i);
//         i++;
//     }
//     return 0;
// }

// Q9 print cubes of the first 10 natural numbers
// #include<stdio.h>
// int main(){
//     int i=1, num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     while (i<=num)
//     {
//         printf("%d\n", i*i*i);
//         i++;
//     }
//     return 0;
// }

// Q10 print 5 table 
// #include<stdio.h>
// int main(){
//     int i=1, num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     while (i<=10)
//     {
//         printf("5 * %d = %d\n", i, num*i);
//         i++;
//     }
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void printFiveTimes(int n){
    int i=1;
    while(i<=n){
        printf("Hello\n");
        i++;
    }
}
void printFirstTenNaturals(int n1){
    int i=1;
    while(i<=n1){
        printf("%d\n", i);
        i++;
    }
}
void printFirstTenNaturalsInReverse(int n2){
    int i=n2;
    while(i>0){
        printf("%d\n", i);
        i--;
    }
}
void printOdd(int n2){
    int i=1;
    while(i<=n2){
        printf("%d\n", i*2-1);
        i++;
    }
}
void printOddInRev(int n3){
    int i=1;
    while(i<=n3){
        printf("%d\n", n3*2+1-2*i);
        i++;
    }
}

void printEven(int n4){
    int i=1;
    while(i<=n4){
        printf("%d\n", i*2);
        i++;
    }
}
void printEvenInRev(int n5){
    int i=1;
    while(i<=n5){
        printf("%d\n", n5*2+2-i*2);
        i++;
    }
}

void printSquaresOfTenNaturals(int n6){
    int i=1;
    while(i<=n6){
        printf("%d\n", i*i);
        i++;
    }
}
void printCubesOfTenNaturals(int n7){
    int i=1;
    while(i<=n7){
        printf("%d\n", i*i*i);
        i++;
    }
}
void printTableOfFive(int n8){
    int i=1;
    while(i<=10){
        printf("%d\n", n8*i);
        i++;
    }
}
int main(){
    // printFiveTimes(20);
    // printFirstTenNaturals(20);
    // printFirstTenNaturalsInReverse(20);
    // printOdd(20);
    // printOddInRev(20);
    // printEven(20);
    // printEvenInRev(20);
    // printSquaresOfTenNaturals(20);
    // printCubesOfTenNaturals(20);
    printTableOfFive(10);
    return 0;
}






