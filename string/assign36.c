// Q1 calculate length of string
// #include<stdio.h>
// #include<string.h>
// int calStrLength(char str[]){
//     for(int i=0; str[i]; i++){
//         if(str[i]=='\n'){
//             str[i]='\0';
//         }
//     }
//     int l=0;
//     l=strlen(str);
//     return l;
// }
// int main(){
//     char str[100];
//     printf("Enter a string: ");
//     fgets(str, 100, stdin);
//     int l=0;
//     l=calStrLength(str);
//     printf("String length is %d", l);
//     return 0;
// }

// Q2 reverse a given string
// #include<stdio.h>
// #include<string.h>
// void reverseString(char str[]){
//     int l;
//     l=strlen(str);
//     for(int i=l-1; i>=0; i--){
//         printf("%c", str[i]);
//     }
// }
// int main(){
//     char str[100];
//     printf("Enter a string: ");
//     fgets(str, 100, stdin);
//     reverseString(str);
//     return 0;
// }

// Q3 compare two strings
// #include<stdio.h>
// #include<string.h>
// int compareStr(char s1[], char s2[]){
//     int l1=strlen(s1);
//     int l2=strlen(s2);
//     int l3;
//     if(l1>l2){
//         l3=l1;
//     } else {
//         l3=l2;
//     }
//     int res;
//     for(int i=0; i<=l3; i++){
//         if(s1[i]==s2[i]){
//             res=0;
//             continue;
//         } else {
//             res=1;
//             break;
//         }
//     }
//     return res;
// }
// int main(){
//     char s1[100], s2[100];
//     printf("Enter first string: ");
//     fgets(s1, 100, stdin);
//     printf("Enter first string: ");
//     fgets(s2, 100, stdin);
//     int res=compareStr(s1, s2);
//     printf(res==1 ? "Not equal" : "Both string are equal");
//     return 0;
// }

// Q4 make string uppercase
// #include<stdio.h>
// void convertIntoUpperCase(char str[]){
//     for(int i=0; str[i]; i++){
//         str[i]=str[i]-32;
//     }
//     printf("%s", str);
// }
// int main(){
//     char str[100];
//     printf("Enter a string: ");
//     fgets(str, 100, stdin);
//     convertIntoUpperCase(str);
//     return 0;
// }

// Q5 make string lowercase
// #include<stdio.h>
// void convertIntoLowercase(char str[]){
//     for(int i=0; str[i]; i++){
//         if(str[i]=='\n'){
//             continue;
//         }
//         str[i]=str[i]+32;
        
//     }
//     printf("%s", str);
// }
// int main(){
//     char str[100];
//     printf("Enter a string: ");
//     fgets(str, 100, stdin);
//     convertIntoLowercase(str);
//     return 0;
// }