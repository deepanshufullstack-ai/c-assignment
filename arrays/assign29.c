// Q1 calculate the sum of array elements
// #include<stdio.h>
// int main(){
//     int a[10], i, sum=0;
//     printf("Enter 10 random numbers: ");
//     for(i=0; i<=9; i++){
//         scanf("%d", &a[i]);
//     }

//     for(i=0; i<=9; i++){
//         sum=sum+a[i];
//     }

//     printf("Sum=%d", sum);
//     return 0;
// }

// Q2 calculate the average of array elements
// #include<stdio.h>
// int main(){
//     int a[10], i, sum=0;
//     float avg=0;
//     printf("Enter 10 numbers to find the average: ");
//     for(i=0; i<=9; i++){
//         scanf("%d", &a[i]);
//     }

//     for(i=0; i<=9; i++){
//         sum=sum+a[i];
//         printf("sum=%d\n", sum);
//     }
//     printf("\n\nsum=%d", sum);

//     avg=sum/10;
//     printf("Avg=%.2f", avg);
//     return 0;
// }

// Q3 calculate sum of even elements of an array
// #include<stdio.h>
// int main(){
//     int a[10], i, even=0, odd=0;
//     printf("Enter 10 numbers: ");
//     for(i=0; i<=9; i++){
//         scanf("%d", &a[i]);
//     }

//     for(i=0; i<=9; i++){
//         if(a[i]%2==0){
//             even=even+a[i];
//         }
//         else{
//             odd=odd+a[i];
//         }
//     }
//     printf("Sum of even is %d & odd is %d", even, odd);
//     printf("Sum of both even or odd is %d", even+odd);
//     return 0;
// }

// Q4 grestest number of an array
// #include <stdio.h>
// int main()
// {
//     int a[10], i, max;
//     printf("Enter 10 numbers: ");
//     for (i = 0; i <= 9; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     max=a[0];
//     for(i=1; i<=9; i++){
//         if(a[i]>max){
//             max=a[i];
//         }
//     }
//     printf("Max is %d", max);
// }

// Q5 smallest number of an array
// #include<stdio.h>
// int main(){
//     int a[10], i, min;
//     printf("Enter 10 numbers: ");
//     for(i=0; i<=9; i++){
//         scanf("%d", &a[i]);
//     }

//     min=a[0];
//     for(i=1; i<=9; i++){
//         if(a[i]<min){
//             min=a[i];
//         }
//     }
//     printf("Min is %d", min);
// }



#include<stdio.h>
void calSumOfArrayElements(int a[]){
    int sum=0;
    for(int i=0; i<=9; i++){
        sum=sum+a[i];
    }
    printf("Sum is %d", sum);
}

void calAvgOfArrayElements(int a[]){
    float avg=0, sum=0;
    int i;
    for(i=0; i<=9; i++){
        sum=sum+a[i];
    }
    avg=sum/i;
    printf("Avg is %.2f\n", avg);
    printf("Last iteration is %d\n", i);
}

void calSumOfEvenArrayElements(int a[]){
    int i, sum=0;
    for(i=0; i<=4; i++){
        if(a[i]%2==0){
            sum=sum+a[i];
        } else {
            continue;
        }
    }
    printf("Sum is %d", sum);
}

void findGreatestInArray(int a[]){
    int grt=a[0];
    for(int i=0; i<=9; i++){
        if(a[i]>grt){
            grt=a[i];
        }
    }
    printf("Greatest in array: %d", grt);
}

void findSmallestInArray(int a[]){
    int sml=a[0];
    for(int i=0; i<=9; i++){
        if(a[i]<sml){
            sml=a[i];
        }
    }
    printf("Smallest in array: %d", sml);
}

int main(){
    // int a[10];
    // printf("Enter 10 numbers: ");
    // for(int i=0; i<=9; i++){
    //     scanf("%d", &a[i]);
    // }
    // calSumOfArrayElements(a);

    // int a[10];
    // printf("Enter 10 numbers: ");
    // for(int i=0; i<=9; i++){
    //     scanf("%d", &a[i]);
    // }
    // calAvgOfArrayElements(a);

    // int a[5];
    // printf("Enter 5 numbers: ");
    // for(int i=0; i<=4; i++){
    //     scanf("%d", &a[i]);
    // }
    // calSumOfEvenArrayElements(a);

    int a[10];
    printf("Enter 10 numbers: ");
    for(int i=0; i<=9; i++){
        scanf("%d", &a[i]);
    }
    findSmallestInArray(a);
    return 0;
}