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