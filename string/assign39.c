// Q1 count frequency fo each character in string
// #include<stdio.h>
// #include<string.h>
// int main() {
//     char str[100];
//     int len=0, count=0;
//     printf("Enter a string: ");
//     fgets(str, 100, stdin);

//     for(int i=0; str[i]!='\0'; i++){
//         if(str[i]=='\n'){
//             str[i]='\0';
//         }
//     }

//     len=strlen(str);

//     for(int i=0; i<len; i++){
//         count=1;

//         if(str[i]==-1){
//             continue;
//         }

//         for(int j=i+1; j<len; j++){
//             if(str[i]==str[j]){
//                 count++;
//                 str[j]=-1;
//             }
//         }
//         printf("%c occur %d times\n", str[i], count);
//     }
//     return 0;
// }

// Q2 find word in a given string
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[100], word[100];

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);

//     printf("Enter a word: ");
//     fgets(word, sizeof(word), stdin);

//     str[strcspn(str, "\n")] = '\0';
//     word[strcspn(word, "\n")] = '\0';

//     if (strstr(str, word) != NULL)
//         printf("Word found\n");
//     else
//         printf("Word not found\n");

//     return 0;
// }

// Q3 make first character of each work to capital
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[100];
//     printf("Enter a string: ");
//     fgets(str, 100, stdin);

//     for(int i=0; str[i]!='\0'; i++){
//         if(str[i]=='\n'){
//             str[i]='\0';
//         }
//     }

//     int len=strlen(str);

//     if(str[0]!=' '){
//         str[0]-=32;
//     }

//     for(int i=0; i<len; i++){
//         if(str[i]==' ' && str[i+1!=' ' && str[i+1]!='\0']){
//             str[i+1]-=32;
//         }
//     }
//     printf("%s", str);
//     return 0;
// }
