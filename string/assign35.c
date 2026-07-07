// Q1 convert string into lowercase
// #include<stdio.h>
// int main(){
//     char str[100];
//     printf("Enter a string: ");
//     fgets(str, 100, stdin);
//     for(int i=0; str[i]; i++){
//         if(str[i]=='\n'){
//             continue;
//         }
//         str[i]=str[i]+32;
//     }
//     printf("%s", str);
//     return 0;
// }

// Q2 reverse a string
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[100]="deepanshu";
//     int len=0;
//     len=strlen(str);
//     printf("len is %d\n", len);
//     for(int i=len-1; i>=0; i--){
//         printf("%c", str[i]);
//     }
//     return 0;
// }

// Q3 count alphabets, digits & special character 
// #include<stdio.h>
// int main(){
//     char str[100];
//     printf("Enter a string: ");
//     fgets(str, 100, stdin);
//     int a=0, d=0, s=0;
//     for(int i=0; str[i]; i++){
//         if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
//             a++;
//         } else if(str[i]>='1' && str[i]<='9'){
//             d++;
//         } else {
//             s++;
//         }
//     }
//     printf("alphabets count: %d, digits count: %d, special char count: %d", a, d, s);
//     return 0;
// }

// Q4 copy one string to another
// #include<stdio.h>
// int main(){
//     char str1[100], str2[100];
//     printf("Enter first string: ");
//     fgets(str1, 100, stdin);
//     printf("first string: %s", str1);
//     printf("second string: %s", str2);
//     for(int i=0; str1[i]; i++){
//         str2[i]=str1[i];
//     }
//     printf("first string: %s", str1);
//     printf("second string: %s", str2);
//     return 0;
// }

// Q5 find first occurrence of a given character in a given string
// #include<stdio.h>
// int main(){
//     char str[100], ch;
//     printf("Enter a string: ");
//     fgets(str, 100, stdin);
//     printf("Enter a character to find first occurrence: ");
//     scanf("%c", &ch);

//     for(int i=0; str[i]; i++){
//         if(str[i]==ch){
//             printf("%d is the first occurrence of %c", i, ch);
//             break;
//         }
//     }
//     return 0;
// }