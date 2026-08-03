
// Q1 find greatest element in an array
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

// Q2 find smallest element in an array
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

// Q3 sort an array
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

// Q4 rotate an array
// #include<stdio.h>
// int main(){
//     int s, temp;
//     printf("Enter the size or array: ");
//     scanf("%d", &s);

//     int a[s];
//     printf("Enter %d elements of array: ", s);
//     for(int i=0; i<s; i++){
//         scanf("%d", &a[i]);
//     }

//     int p=0;
//     printf("Enter number of position to rotate: ");
//     scanf("%d", &p);

//     int d=0;
//     printf("Enter direction of rotation 0 for left, 1 for right: ");
//     scanf("%d", &d);

//     p=p%s;

//     if(d==0){
//        while(p--){
//           temp=a[0];
//           for(int i=0; i<s-1; i++){
//               a[i]=a[i+1];
//           }
//           a[s-1]=temp;
//        }
//     } else {
//         while(p--){
//             temp = a[s - 1];
//             for(int i = s - 1; i > 0; i--){
//                 a[i] = a[i - 1];
//             }
//             a[0] = temp;
//         }
//     }

//     for(int i=0; i<s; i++){
//         printf("%d", a[i]);
//     }

//     return 0;
// }

// Q5 find first adjacent duplicate element
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
//             printf("First adjacent duplicate value is %d at index %d", a[i],
//             i);
//         }
//     }
//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
void findGreatest(int arr[], int size) {
  int grt = arr[0];
  for (int i = 0; i <= size - 1; i++) {
    if (arr[i] > grt) {
      grt = arr[i];
    }
  }
  printf("%d is gretest", grt);
}

void findSmallest(int a[], int s) {
  int sml = a[0];
  for (int i = 0; i <= s - 1; i++) {
    if (a[i] < sml) {
      sml = a[i];
    }
  }
  printf("%d is smallest", sml);
}

void shortArray(int a[], int s) {
  int temp;
  for (int i = 0; i <= s - 1; i++) {
    for (int j = i + 1; j <= s - 1; j++) {
      if (a[i] > a[j]) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }

  for (int i = 0; i <= s - 1; i++) {
    printf("%d", a[i]);
  }
}

void rotateByPositionAndDirection(int a[], int s, int p, int d) {
  int temp;
  p = p % s;
  if (d == 0) {
    while (p--) {
      temp = a[0];
      for (int i = 0; i < s - 1; i++) {
        a[i] = a[i + 1];
      }
      a[s - 1] = temp;
    }
  } else {
    while (p--) {
      temp = a[s - 1];
      for (int i = s - 1; i > 0; i--) {
        a[i] = a[i - 1];
      }
      a[0] = temp;
    }
  }

  for (int i = 0; i <= s - 1; i++) {
    printf("%d", a[i]);
  }
}

void firstAdjacentDuplicate(int a[], int s){
  for(int i=0; i<=s-1; i++){
    if(a[i]==a[i+1]){
      printf("First adjacent duplicate is %d at %d index", a[i], i);
    }
  }
}

int main() {
  // int size;
  // printf("Enter the size of an array: ");
  // scanf("%d", &size);
  // int arr[size];
  // printf("Enter %d elements of an array: ", size);
  // for(int i=0; i<=size-1; i++){
  //     scanf("%d", &arr[i]);
  // }
  // findGreatest(arr, size);

  // int size;
  // printf("Enter the size of an array: ");
  // scanf("%d", &size);
  // int arr[size];
  // printf("Enter %d elements of an array: ", size);
  // for(int i=0; i<=size-1; i++){
  //     scanf("%d", &arr[i]);
  // }
  // findSmallest(arr, size);

  //   int size;
  //   printf("Enter the size of an array: ");
  //   scanf("%d", &size);
  //   int arr[size];
  //   printf("Enter %d elements of an array: ", size);
  //   for(int i=0; i<=size-1; i++){
  //       scanf("%d", &arr[i]);
  //   }
  //   shortArray(arr, size);

  // int size, pos, dir;
  // printf("Enter the size of an array: ");
  // scanf("%d", &size);
  // int arr[size];
  // printf("Enter %d elements of an array: ", size);
  // for (int i = 0; i <= size - 1; i++) {
  //   scanf("%d", &arr[i]);
  // }
  // printf("Enter number of rotate positions: ");
  // scanf("%d", &pos);
  // printf("Enter direction (1 for right & 0 for left): ");
  // scanf("%d", &dir);

  // rotateByPositionAndDirection(arr, size, pos, dir);

  int size;
  printf("Enter size of array: ");
  scanf("%d", &size);
  int arr[size];
  printf("Enter %d elements in array: ", size);
  for(int i=0; i<size; i++){
    scanf("%d", &arr[i]);
  }
  firstAdjacentDuplicate(arr, size);
  return 0;
}