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
//         if(str[i]==' ' && str[i+1]!=' ' && str[i+1]!='\0']){
//             str[i+1]-=32;
//         }
//     }
//     printf("%s", str);
//     return 0;
// }

// Q4 make acronym of a given string
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
    
//     int l=strlen(str);
    
//     int ls=0;
    
//     for (int i = 0; i < l; i++) {
//         if (str[i] == ' '){
//             ls = i;
//         }
//     }
    
//     if(str[0] != ' '){
//         printf("%c ", str[0]);
//     }
    
//     for(int i=1; i<ls; i++){
//         if(str[i-1]==' ' && str[i] != ' '){
//             printf("%c ", str[i]);
//         }
//     }
    
//     printf("%s\n", str+ls+1);
    
//     return 0;
// }


// Q5 concatenate two strings
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str1[10], str2[10];
//     int l1 = 0, l2 = 0;

//     printf("Enter first string: ");
//     fgets(str1, 10, stdin);
//     printf("Enter second string: ");
//     fgets(str2, 10, stdin);

//     for (int i = 0; str1[i] != '\0'; i++)
//     {
//         if (str1[i] == '\n')
//         {
//             str1[i] = '\0';
//         }
//     }

//     for (int i = 0; str2[i] != '\0'; i++)
//     {
//         if (str2[i] == '\n')
//         {
//             str2[i] = '\0';
//         }
//     }

//     l1 = strlen(str1);
//     l2 = strlen(str2);

//     char str3[l1 + l2 + 2];

//     for (int i = 0; i < l1 + l2 + 1; i++)
//     {
//         if (i < l1)
//             str3[i] = str1[i];
//         else if (i == l1)
//             str3[i] = ' ';
//         else
//             str3[i] = str2[i - l1 - 1];
//     }

//     str3[l1 + l2 + 1] = '\0';

//     printf("%s\n", str3);
//     printf("Concatenated string: %s\n", str3);

//     return 0;
// }
