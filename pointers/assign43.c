// #include<stdio.h>
// void swapString(char *str1, char *str2){
//     char temp;
    
//     while(*str1 != '\0' || *str2 != '\0'){
//         temp = *str1;
//         *str1=*str2;
//         *str2=temp;
        
//         if(*str1 != '\0'){
//             str1++;
//         }
//         if(*str2 != '\0'){
//             str2++;
//         }
//     }
// }
// int main(){
//     char str1[20] = "Hello";
//     char str2[20] = "World";
    
//     printf("Before swapping\n");
//     printf("%s\n", str1);
//     printf("%s\n", str2);
    
//     swapString(str1, str2);
    
//     printf("\nAfter swapping\n");
//     printf("%s\n", str1);
//     printf("%s\n", str2);
// }