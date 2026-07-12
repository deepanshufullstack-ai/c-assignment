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

//     printf("Array after swapping elements at indices %d and %d:\n", index1, index2);
//     for (int i = 0; i < size; i++)
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

