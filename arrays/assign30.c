// Q1 sort element of an array
// #include<stdio.h>
// int main(){
//     int a[5], i, j, temp;
//     printf("Enter 5 numbers: ");
//     for(i=0; i<5; i++){
//     scanf("%d", &a[i]);
//     }
    
//     for(i=0; i<5; i++){
//         for(j=i+1; j<5; j++){
//             if(a[i]>a[j]){
//                 temp=a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//             }
//         }
//     }
    
//     for(i=0; i<5; i++){
//         printf("%d ", a[i]);
//     }
// }

// Q2 second largest element
// #include<stdio.h>
// int main(){
//     int a[5], i, j, temp;
//     printf("Enter 5 numbers: ");
//     for(i=0; i<5; i++){
//     scanf("%d", &a[i]);
//     }
    
//     for(i=0; i<5; i++){
//         for(j=i+1; j<5; j++){
//             if(a[i]>a[j]){
//                 temp=a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//             }
//         }
//     }
    
//     for(i=0; i<5; i++){
//         printf("%d\n", a[i]);
//     }
//     printf("Largest element = %d\n", a[4]);
//         printf("Second largest element = %d\n", a[3]);
// }

// Q3 second smallest element
// #include<stdio.h>
// int main(){
//     int a[5], i, j, temp;
//     printf("Enter 5 numbers: ");
//     for(i=0; i<5; i++){
//     scanf("%d", &a[i]);
//     }
    
//     for(i=0; i<5; i++){
//         for(j=i+1; j<5; j++){
//             if(a[i]>a[j]){
//                 temp=a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//             }
//         }
//     }
    
//     for(i=0; i<5; i++){
//         printf("%d\n", a[i]);
//     }
//     printf("Smallest element = %d\n", a[0]);
//         printf("Second Smallest element = %d\n", a[1]);
// }

// Q4 sort in desending order
// #include<stdio.h>
// int main(){
//     int a[5], i, j, temp;
//     printf("Enter 5 numbers: ");
//     for(i=0; i<5; i++){
//     scanf("%d", &a[i]);
//     }
    
//     for(i=0; i<5; i++){
//         for(j=i+1; j<5; j++){
//             if(a[i]<a[j]){
//                 temp=a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//             }
//         }
//     }
    
//     for(i=0; i<5; i++){
//         printf("%d ", a[i]);
//     }
// }

// Q5 copy the elements of one array into another array
// #include<stdio.h>
// int main(){
//     int a[5], b[5], i;
//     printf("Enter 5 numbers: ");
    
//     for(i=0; i<5; i++){
//     scanf("%d", &a[i]);
//     }
    
//     for(i=0; i<5; i++){
//         printf("a[%d] is %d\n", i, a[i]);
//         b[i] = a[i];
//         printf("b[%d] is %d\n", i, b[i]);
//     }
    
//     for(i=0; i<5; i++){
//         printf("%d ", b[i]);
//     }
//     return 0;
// }

