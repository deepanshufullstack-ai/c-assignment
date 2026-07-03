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