// Q1 check string is palindrome or not
// #include<stdio.h>
// #include<string.h>
// int main() {
//     char str1[100], str2[100];
//     int len=0;
//     printf("Enter a string: ");
//     fgets(str1, 100, stdin);
//     for(int i=0; str1[i]!='\0'; i++){
//         if(str1[i]=='\n'){
//             str1[i]='\0';
//         }
//     }
    
//     len=strlen(str1);
    
//     for(int i=0; i<len; i++){
//         str2[i]=str1[len-i-1];
//     }
    
//     int cmp=0;
//     cmp=strcmp(str1, str2);
//     if(cmp==0){
//         printf("Palindrome");
//     } else {
//         printf("Not palindrome");
//     }
    
//     return 0;
// }

// Q2 remove unknown spaces from string
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[100];
//     printf("Enter a string: ");
//     fgets(str, 100, stdin);
    
//     int len=0, start=0, end=0;
//     len=strlen(str);
//     while(str[start]==' '){
//         start++;
//     }
    
//     end=len-1;
//     while(str[end]==' '){
//         end--;
//     }
    
//     for(int i=start; i<=end; i++){
//         printf("%c", str[i]);
//     }
//     return 0;
// }

// Q3 count number of words in string
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[100];
//     int count=0;
//     printf("Enter a string: ");
//     fgets(str, 100, stdin);
    
//     if(str[0]!=' '){
//         count++;
//     }
    
//     for(int i=0; str[i]!='\0'; i++){
//         if(str[i]==' ' && str[i+1]!=' ' && str[i+1]!='\0'){
//             count++;
//         }
//     }
//     printf("Number of words is %d", count);
//     return 0;
// }

// Q4 reverse a string word by word
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
    
//     for(int i=len-1; i>=0; i--){
//         if(str[i]==' '){
//             printf("%s ", &str[i+1]);
//             str[i]='\0';
//         }
//     }
    
//     printf("%s", str);
//     return 0;
// }

// Q5 do case insensitive string comparison
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str1[100], str2[100];
//     printf("Enter first string: ");
//     fgets(str1, 100, stdin);

//     printf("Enter first string: ");
//     fgets(str2, 100, stdin);
    
//     for(int i=0; str1[i]!='\0'; i++){
//         if(str1[i]=='\n'){
//             str1[i]='\0';
//         }
//     }
    
//     for(int i=0; str2[i]!='\0'; i++){
//         if(str2[i]=='\n'){
//             str2[i]='\0';
//         }
//     }
    
//     int l1=0, l2=0;
//     l1=strlen(str1);
//     l2=strlen(str2);
    
//     if(l1!=l2){
//         printf("String are not equal");
//     } else {
//         for(int i=0; i<l1; i++){
//             if(str1[i]>='A' && str1[i]<='Z'){
//                 str1[i]+=32;
//             }
            
//             if(str2[i]>='A' && str2[i]){
//                 str2[i]+=32;
//             }
//         }
//     }
    
//     int cam=strcmp(str1, str2);
    
//     if(cam){
//         printf("Strings are equal");
//     } else {
//         printf("Strings are not equal");
//     }
//     return 0;
// }

