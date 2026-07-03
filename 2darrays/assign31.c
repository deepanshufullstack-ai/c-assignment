
// Q1
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

// Q2
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

// Q3
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

// Q4 
// #include <stdio.h>
// int main() {
//     int size, i, num, direction;
//     printf("Enter the size of an array: ");
//     scanf("%d", &size);
//     int a[size];
//     int temp[size];
//     printf("Enter %d array elements: ",size);
//     for(i=0; i<size; i++){
//         scanf("%d", &a[i]);
//     }
//     printf("Enter number of position to rotate: ");
//     scanf("%d", &num);
//     printf("Enter rotate direction (0 left, 1 right): ");
//     scanf("%d", &direction);
//     num=num%size;
//     if(direction==0){
//         for(i=0; i<size; i++){
//             temp[i]=a[(i+num)%size];
//         }
//     } else {
//         for(i=0; i<size; i++){
//             temp[(i+num)%size]=a[i];
//         }
//     }
//     for(i=0; i<size; i++){
//         printf("%d ", temp[i]);
//     }
//     return 0;
// }

// Q5 
// #include <stdio.h>
// int main() {
//     int size;
//     printf("Enter size of array: ");
//     scanf("%d", &size);
//     int a[size];
//     printf("Enter %d elements in array: ", size);
//     for(int i=0; i<size; i++){
//         scanf("%d", &a[i]);
//     }
//     for(int i=0; i<size; i++){
//         if(a[i]==a[i+1]){
//             printf("First adjacent duplicate value is %d at index %d", a[i], i);
//         }
//     }
//     return 0;
// }