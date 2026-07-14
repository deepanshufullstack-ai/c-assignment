// Q1
// #include<stdio.h>
// void swap(int *a, int *b){
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;
// }
// int main(){
//     int x=20, y=30;
//     printf("Befor swapping: x=%d, y=%d\n", x, y);
//     swap(&x, &y);
//     printf("After swapping: x=%d, y=%d\n", x, y);
//     return 0;
// }

// Q2
// #include<stdio.h>
// int findOccurrences(char *str, char ch, int *indices){
//     int count = 0;
//     int index = 0;

//     while(*str != '\0'){
//         if(*str==ch){
//             *indices = index;
//             indices++;
//             count++;
//         }
//         str++;
//         index++;
//     }
//     return count;
// }
// int main(){
//     char str[] = "programming";
//     char ch = 'm';

//     int indices[100];
//     int count = findOccurrences(str, ch, indices);

//     if(count == 0){
//         printf("Character '%c' not found\n", ch);
//     }
//     else {
//         printf("Character '%c' found at indices: ", ch);
//         for(int i=0; i<count; i++){
//             printf("%d ", *(indices + i));
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Q3
// #include<stdio.h>
// void toUpperCase(char *str){
//     while(*str != '\0'){
//         if(*str >= 'a' && *str <= 'z'){
//             *str = *str - 32;
//         }
//         str++;
//     }
// }
// int main(){
//     char str[] = "hello, world";
//     printf("Befor: %s\n", str);
//     toUpperCase(str);
//     printf("After: %s\n", str);
//     return 0;
// }

// Q4
// #include<stdio.h>
// void toLowerCase(char *str){
//     while(*str != '\0'){
//         if(*str >= 'A' && *str <= 'Z'){
//             *str = *str + 32;
//         }
//         str++;
//     }
// }
// int main(){
//     char str[] = "DEEPANSHU";
//     printf("Befor: %s\n", str);
//     toLowerCase(str);
//     printf("After: %s\n", str);
//     return 0;
// }

// Q5
// #include<stdio.h>
// void extractSubstring(char *source, char *dest, int start, int end){
//     int i=0;

//     source += start; 

//     while(start<=end && *source != '\0'){
//         *(dest+i) = *source;
//         source++;
//         i++;
//         start++;
//     }
//     *(dest+i) = '\0';
// }
// int main(){
//     char str[] = "Programming";
//     char subStr[100];
    
//     int start = 3;
//     int end = 7;

//     extractSubstring(str, subStr, start, end);

//     printf("Original string: %s\n", str);
//     printf("Extracted substring: %s\n", subStr);

//     return 0;
// }