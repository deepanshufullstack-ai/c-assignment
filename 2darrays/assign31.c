
// #include <stdio.h>
// int findGreatest(int a[], int size) {
//   int largest = a[0];

//   for (int i = 1; i < size; i++) {
//     if (a[i] > largest) {
//       largest = a[i];
//     }
//   }

//   return largest;
// }

// int main() {
//   int size;

//   printf("Enter the size or array: ");
//   scanf("%d", &size);

//   int a[size];

//   printf("Enter %d elements of array: ", size);
//   for (int i = 0; i < size; i++) {
//     scanf("%d", &a[i]);
//   }

//   int largest = findGreatest(a, size);

//   printf("Largest element is %d\n", largest);
//   return 0;
// }

// #include <stdio.h>
// int findSmallest(int a[], int size) {
//   int smallest = a[0];

//   for (int i = 1; i < size; i++) {
//     if (a[i] < smallest) {
//       smallest = a[i];
//     }
//   }

//   return smallest;
// }

// int main() {
//   int size;

//   printf("Enter the size or array: ");
//   scanf("%d", &size);

//   int a[size];

//   printf("Enter %d elements of array: ", size);
//   for (int i = 0; i < size; i++) {
//     scanf("%d", &a[i]);
//   }

//   int smallest = findSmallest(a, size);

//   printf("Smallest element is %d\n", smallest);
//   return 0;
// }

// #include <stdio.h>

// void sortArray(int a[], int size) {
//   int temp;
//   for (int i = 0; i < size; i++) {
//     for (int j = i + 1; j < size; j++) {
//       if (a[i] > a[j]) {
//         temp = a[i];
//         a[i] = a[j];
//         a[j] = temp;
//       }
//     }
//   }

//   for (int i = 0; i < size; i++) {
//     printf("%d", a[i]);
//   }
// }

// int main() {
//   int size;

//   printf("Enter the size of array: ");
//   scanf("%d", &size);

//   int a[size];

//   printf("Enter %d elements of array: ", size);
//   for (int i = 0; i < size; i++) {
//     scanf("%d", &a[i]);
//   }

//   sortArray(a, size);
//   return 0;
// }

// #include<stdio.h>
// int main(){
//     int a[100], temp[100];
//     int size, n, d, i;

//     printf("Enter size of array: ");
//     scanf("%d", &size);

//     printf("Enter %d elements of array: ", size);
//     for(i=0; i<size; i++){
//         scanf("%d", &a[i]);
//     }

//     printf("Enter number of positions to rotate: ");
//     scanf("%d", &n);

//     printf("Enter direction of rotation (1 for left, 2 for right): ");
//     scanf("%d", &d);

//     n=n%size;
//     if(d==0){
//         for(i=0; i<size; i++){
//             temp[i]=a[(i+n)%size];
//         }
//     } else {
//         for(i=0; i<size; i++){
//             temp[(i+n)%size]=a[i];
//         }
//     }

//     printf("Rotated array\n");
//     for(i=0; i<size; i++){
//         printf("%d", temp[i]);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a[100], size, n, d, i, j, temp;

//     printf("Enter size: ");
//     scanf("%d", &size);

//     printf("Enter array elements: ");
//     for(i = 0; i < size; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     printf("Enter n: ");
//     scanf("%d", &n);

//     printf("Enter direction (0=Left, 1=Right): ");
//     scanf("%d", &d);

//     for(i = 0; i < n; i++)
//     {
//         if(d == 0)   // Left Rotation
//         {
//             temp = a[0];

//             for(j = 0; j < size - 1; j++)
//             {
//                 a[j] = a[j + 1];
//             }

//             a[size - 1] = temp;
//         }
//         else         // Right Rotation
//         {
//             temp = a[size - 1];

//             for(j = size - 1; j > 0; j--)
//             {
//                 a[j] = a[j - 1];
//             }

//             a[0] = temp;
//         }
//     }

//     printf("Rotated Array:\n");

//     for(i = 0; i < size; i++)
//     {
//         printf("%d ", a[i]);
//     }

//     return 0;
// }