// Q1 count vowels in a string
// #include <stdio.h>
// int countVowel(char s[]){
//     int i, count=0;
//     for(i=0; s[i]; i++){
//         if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
//             count++;
//         }
//     }
//     return count;
// }
// int main() {
//     char s[100];
//     printf("Enter a string: ");
//     fgets(s, 100, stdin);
//     int count=0;
//     count=countVowel(s);
//     printf("%d vowels are available in this string", count);
//     return 0;
// }

// Q2 find occurrences of a character in a string & return index of first occurrence
// #include <stdio.h>
// int findCharacter(char s[], char c){
//     int i;
//     for(i=0; s[i]; i++){
//         if(s[i]==c){
//             return i;
//         }
//     }
//     return -1;
// }
// int main() {
//     char s[100], c;
//     printf("Enter a string: ");
//     fgets(s, 100, stdin);
//     printf("Enter a character to find: ");
//     scanf("%c", &c);
//     printf("index is %d", findCharacter(s, c));
//     return 0;
// }

// Q3 find a character in a string between specified indexes
// #include <stdio.h>
// int findStringbtwIndex(char s[], char c, int i1, int i2){
//     int i;
//     for(i=i1; i<=i2; i++){
//         if(s[i]==c){
//             return i;
//         }
//     }
//     return -1;
// }
// int main() {
//     char s[100], c;
//     int i1, i2;
//     printf("Enter a string: ");
//     fgets(s, 100, stdin);
//     printf("Enter a character to find: ");
//     scanf("%c", &c);
//     printf("Enter a specific indices: ");
//     scanf("%d%d", &i1, &i2);
//     int found;
//     found=findStringbtwIndex(s, c, i1, i2);
//     printf(found == -1 ? "Not found" : "Found at %d index", found);
//     return 0;
// }

// Q4 swap two characters in a string with specified indexes
// #include<stdio.h>
// #include<string.h>
// void swapCh(char s[], int i1, int i2){
//     int i, temp;
//     for(i=0; s[i]; i++){
//         if(i==i1){
//             temp=s[i];
//             s[i]=s[i2];
//             s[i2]=temp;
//         }
//     }
//     printf("Now swapped string is %s", s);
// }
// int main(){
//     char s[100];
//     int i1, i2;
//     printf("Enter a string: ");
//     fgets(s, 100, stdin);
//     printf("Enter indices for swap: ");
//     scanf("%d%d", &i1, &i2);
//     swapCh(s, i1, i2);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// void swapCh(char s[], int i1, int i2){
//     int temp;
//     temp=s[i1];
//     s[i1]=s[i2];
//     s[i2]=temp;
//     printf("Now swapped string is %s", s);
// }
// int main(){
//     char s[100];
//     int i1, i2;
//     printf("Enter a string: ");
//     fgets(s, 100, stdin);
//     printf("Enter indices for swap: ");
//     scanf("%d%d", &i1, &i2);
//     swapCh(s, i1, i2);
//     return 0;
// }

// Q5 check given string is alphanumeric or not
// #include <stdio.h>
// int main() {
//     char str[100];
//     printf("Enter an alphanumeric string: ");
//     fgets(str, 100, stdin);
//     int ch = 0, num = 0;
//     for (int i = 0; str[i] != '\0'; i++) {
//         if ((str[i] >= 'a' && str[i] <= 'z') ||
//             (str[i] >= 'A' && str[i] <= 'Z')) {
//             ch = 1;
//         }
//         if (str[i] >= '0' && str[i] <= '9') {
//             num = 1;
//         }
//     }
//     if (ch && num)
//         printf("Alphanumeric\n");
//     else
//         printf("Not alphanumeric\n");
//     return 0;
// }