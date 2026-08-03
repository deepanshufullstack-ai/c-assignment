// Q1 swap two elements in an array
// #include<stdio.h>
// int main()
// {
//     int size, temp, a[10];
//     printf("Enter the size of array: ");
//     scanf("%d", &size);

//     a[size];
//     printf("Enter %d elements of array: ", size);
//     for (int i = 0; i < size; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     printf("Enter two indices to swap: ");
//     int index1, index2;
//     scanf("%d %d", &index1, &index2);

//     temp=a[index1];
//     a[index1]=a[index2];
//     a[index2]=temp;

//     printf("Array after swapping elements at indices %d and %d:\n", index1,
//     index2); for (int i = 0; i < size; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     printf("\n");
// }

// Q2 find duplicate elements in an array
// #include<stdio.h>
// int main(){
//     int n, i, j, count=0;
//     printf("Enter the size of array: ");
//     scanf("%d", &n);

//     int a[n];
//     printf("Enter %d elements of array: ");
//     for(i=0; i<n; i++){
//         scanf("%d", &a[i]);
//     }

//     for(i=0; i<n; i++){
//         for(j=i+1; j<n; j++){
//             if(a[i]==a[j]){
//                 count++;
//                 break;
//             }
//         }
//     }

//     printf("Total dubplicate numbers = %d", count);
//     return 0;
// }

// Q3 find unique elements in an array
// #include<stdio.h>
// int main(){
//     int n, i, j, count;
//     printf("Enter the size of an array: ");
//     scanf("%d", &n);

//     int a[n];
//     printf("Enter the %d elements of array: ");
//     for(i=0; i<n; i++){
//     scanf("%d", &a[i]);
//     }

//     for(i=0; i<n; i++){
//         count=0;
//         for(j=0; j<n; j++){
//             if(a[i]==a[j]){
//                 count++;
//             }
//         }

//         if(count==1){
//             printf("%d", a[i]);
//         }
//     }

//     return 0;
// }

// Q4 merge two arrays and sort in descending order
// #include<stdio.h>
// int main(){
//     int n, i, j, temp;
//     printf("Enter the size of arrays: ");
//     scanf("%d", &n);

//     int a[n], b[n], c[n+n];
//     printf("Enter elements of first array: ");
//     for(i=0; i<n; i++){
//         scanf("%d", &a[i]);
//     }

//     printf("Enter elements of second array: ");
//     for(i=0; i<n; i++){
//         scanf("%d", &b[i]);
//     }

//     for(i=0; i<n; i++){
//         c[i]=a[i];
//     }

//     for(i=0; i<n; i++){
//         c[n+i]=b[i];
//     }

//     for(i=0; i<2*n; i++){
//         for(j=i+1; j<2*n; j++){
//             if(c[i] <c[j]){
//                 temp=c[i];
//                 c[i]=c[j];
//                 c[j]=temp;
//             }
//         }
//     }

//     for(i=0; i<2*n; i++){
//         printf("%d ", c[i]);
//     }
//     return 0;
// }

// Q5 frequency of each element of an array
// #include <stdio.h>
// int main() {
//     int size, count;
//     printf("Enter the size of an array: ");
//     scanf("%d", &size);

//     int a[size];
//     printf("Enter %d elements of array:", size);
//     for(int i=0; i<size; i++){
//         scanf("%d", &a[i]);
//     }

//     for(int i=0; i<size; i++){
//         int count=1;

//         if(a[i]==-1){
//             continue;
//         }

//         for(int j=i+1; j<size; j++){
//             if(a[i]==a[j]){
//                 count++;
//                 a[j]=-1;
//             }
//         }
//         printf("%d occur %d times\n", a[i], count);
//     }

//     return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
void swapIndices(int a[], int s, int i1, int i2) {
  int temp;
  temp = a[i1];
  a[i1] = a[i2];
  a[i2] = temp;
  for (int i = 0; i <= s - 1; i++) {
    printf("%d ", a[i]);
  }
}

void findTotalDuplicate(int a[], int s) {
  int count = 0;
  for (int i = 0; i <= s - 1; i++) {
    for (int j = i + 1; j <= s - 1; j++) {
      if (a[i] == a[j]) {
        count++;
        break;
      }
    }
  }
  printf("Total duplicate numbers is %d", count);
}

void findUnique(int a[], int s) {
  int count;
  for (int i = 0; i <= s - 1; i++) {
    count = 0;
    for (int j = 0; j <= s - 1; j++) {
      if (a[i] == a[j]) {
        count++;
      }
    }
    if (count == 1) {
      printf("%d ", a[i]);
    }
  }
}

void mergeAndSortArray(int a[], int b[], int s) {
  int s1 = s + s;
  int c[s1];

  for (int i = 0; i < s; i++) {
    c[i] = a[i];
  }

  for (int i = 0; i < s; i++) {
    c[s + i] = b[i];
  }

  int temp;

  for (int i = 0; i < s1; i++) {
    for (int j = i + 1; j < s1; j++) {
      if (c[i] < c[j]) {
        temp = c[i];
        c[i] = c[j];
        c[j] = temp;
      }
    }
  }

  for (int i = 0; i < s1; i++) {
    printf("%d ", c[i]);
  }
}

void countTheFreqency(int a[], int s) {
  int count = 1;
  for (int i = 0; i < s; i++) {
    count = 1;
    if (a[i] == -1) {
      continue;
    }
    for (int j = i + 1; j < s; j++) {
      if (a[i] == a[j]) {
        count++;
        a[j] = -1;
      }
    }
    printf("%d occur %d times\n", a[i], count);
  }
}

int main() {
  // int s, i1, i2;
  // printf("Enter a size or array: ");
  // scanf("%d", &s);
  // int a[s];
  // printf("Enter %d elements of an array: ", s);
  // for(int i=0; i<=s-1; i++){
  //     scanf("%d", &a[i]);
  // }
  // printf("Enter array indices to swap: ");
  // scanf("%d%d", &i1, &i2);
  // swapIndices(a, s, i1, i2);

  // int s;
  // printf("Enter a size of array: ");
  // scanf("%d", &s);
  // int a[s];
  // printf("Enter %d elements of an array: ");
  // for(int i=0; i<=s-1; i++){
  // scanf("%d", &a[i]);
  // }
  // findTotalDuplicate(a, s);

  // int s;
  // printf("Enter a size of array: ");
  // scanf("%d", &s);
  // int a[s];
  // printf("Enter %d elements of an array: ");
  // for(int i=0; i<=s-1; i++){
  // scanf("%d", &a[i]);
  // }
  // findUnique(a, s);

  // int s;
  // printf("Enter size of arrays: ");
  // scanf("%d", &s);
  // int a[s], b[s];
  // printf("Enter %d elements of 1st array: ", s);
  // for(int i=0; i<s; i++){
  //     scanf("%d", &a[i]);
  // }

  // printf("Enter %d elements of 2nd array: ", s);
  // for(int i=0; i<s; i++){
  //     scanf("%d", &b[i]);
  // }

  // mergeAndSortArray(a, b, s);

  int s;
  printf("Enter a size of array: ");
  scanf("%d", &s);
  int a[s];
  printf("Enter %d elements of an array: ");
  for (int i = 0; i <= s - 1; i++) {
    scanf("%d", &a[i]);
  }
  countTheFreqency(a, s);
  return 0;
}