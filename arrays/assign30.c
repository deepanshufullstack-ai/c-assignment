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

//

// Q2 second largest element (sorting gives you first & second largest numbers)
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

// Q3 second smallest element (sorting gives you first & second smallest
// numbers) #include<stdio.h> int main(){
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

// Q6 find largest element in array
// #include <stdio.h>
// int main() {
//   int a[5], i, largest, secondLargest;
//   printf("Enter 5 numbers to find largest & second largest: ");

//   for (i = 0; i < 5; i++) {
//     scanf("%d", &a[i]);
//   }

//   largest = secondLargest = a[0];
//   for (i = 1; i < 5; i++) {
//     if (a[i] > largest) {
//       largest = a[i];
//     }
//   }

//   for(i=1; i<5; i++){
//     if(a[i]>secondLargest && a[i] != largest){
//         secondLargest=a[i];
//     }
//   }

//   printf("Largest element is %d\n", largest);
//   printf("Second largest element is %d\n", secondLargest);
//   return 0;
// }

// Q7 find smallest element in array
// #include <stdio.h>
// int main() {
//   int a[5], i, smallest, secondSmallest;
//   printf("Enter 5 numbers: ");


//   for (i = 0; i < 5; i++) {
     
//     scanf("%d", &a[i]);
//   }

//   smallest = a[0];
//   for (i = 1; i < 5; i++) {
//     if (a[i] < smallest) {
//       smallest = a[i];
//     }
//   }
  
//     secondSmallest = 99999;  

//     for(i = 0; i < 5; i++)
//     {
//         if(a[i] > smallest && a[i] < secondSmallest)
//         {
//             secondSmallest = a[i];
//         }
//     }
//   printf("smallest element is %d\n", smallest);
//   printf("Second smallest element is %d\n", secondSmallest);
// }
