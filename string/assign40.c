// Q1 
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[5][50];
//     printf("Enter 5 strings: ");
//     for(int i=0; i<5; i++){
//         scanf("%49s", str[i]);
//     }
    
//     printf("Stored strings: \n");
//     for(int i=0; i<5; i++){
//         printf("%s\n", str[i]);
//     }
    
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[3][50];
//     printf("Enter 3 strings: ");
//     for(int i=0; i<3; i++){
//         fgets(str[i], sizeof(str[i]), stdin);
//         str[i][strcspn(str[i], "\n")] = '\0';
//     }
    
//     printf("Stored strings: \n");
//     for(int i=0; i<3; i++){
//         printf("%s\n", str[i]);
//     }
//     return 0;
// }

// Q2
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[5][100];
//     printf("Enetr 5 strings: ");
//     for(int i=0; i<5; i++){
//         fgets(str[i], sizeof(str[i]), stdin);
//         str[i][strcspn(str[i], "\n")]='\0';
//     }
    
//     printf("Number of vowels in each string: \n");
    
//     for(int i=0; i<5; i++){
//         int count=0;
//         for(int j=0; str[i][j] != '\0'; j++){
//             char ch=str[i][j];
            
//             if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='u'){
//                 count++;
//             }
//         }
//         printf("String %d: %d vowels\n", i+1, count);
//     }
    
//     return 0;
// }

// Q3
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char city[5][50], temp[50];
//     printf("Enter 5 city names: ");
//     for(int i=0; i<5; i++){
//         fgets(city[i], sizeof(city[i]), stdin);
//         city[i][strcspn(city[i], "\n")]='\0';
//     }
    
//     for(int i=0; i<4; i++){
//         for(int j=i+1; j<5; j++){
//             if(strcmp(city[i], city[j])>0){
//                 strcpy(temp, city[i]);
//                 strcpy(city[i], city[j]);
//                 strcpy(city[j], temp);
//             }
//         }
//     }
    
//     printf("Cities in alphabetical order: \n");
//     for(int i=0; i<5; i++){
//         printf("%s\n", city[i]);
//     }
//     return 0;
// }

// Q4
// #include <stdio.h>
// int main() {
// char str[100];
//     char words[20][20];
//     int i, j = 0, k = 0;

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
    
//     for(i=0; str[i] != '\0'; i++){
//         if(str[i] == ' ' || str[i] == '\n'){
//             words[k][j]='\0';
//             k++;
//             j=0;
//         } else {
//             words[k][j]=str[i];
//             j++;
//         }
//     }
    
//     for(i=0; i<=k; i++){
//         printf("%s\n", words[i]);
//     }

//     return 0;
// }

// Q5
// #include <stdio.h>
// #include <string.h>

// int main() {
//     int n;

//     printf("Enter number of names: ");
//     scanf("%d", &n);
//     getchar(); // consume newline

//     char names[n][50];

//     printf("Enter %d names:\n", n);
//     for(int i = 0; i < n; i++) {
//         fgets(names[i], sizeof(names[i]), stdin);
//         names[i][strcspn(names[i], "\n")] = '\0';
//     }

//     // Remove duplicates
//     for(int i = 0; i < n; i++) {
//         for(int j = i + 1; j < n; j++) {
//             if(strcmp(names[i], names[j]) == 0) {
//                 // Shift all names left
//                 for(int k = j; k < n - 1; k++) {
//                     strcpy(names[k], names[k + 1]);
//                 }
//                 n--;
//                 j--; // check current position again
//             }
//         }
//     }

//     printf("\nNames after removing duplicates:\n");
//     for(int i = 0; i < n; i++) {
//         printf("%s\n", names[i]);
//     }

//     return 0;
// }