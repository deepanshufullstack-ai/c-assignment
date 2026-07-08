// Q1 
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[100];
//     char words[20][20];
//     char temp[20];
//     int i, j=0, k=0, count=0;
    
//     printf("Enter a sentence: ");
//     fgets(str, 100, stdin);
    
//     for(i=0; ; i++){
//         if(str[i] != ' ' && str[i] != '\0' && str[i]!='\n'){
//             temp[j++]=str[i];
//         }
//         else {
//             temp[j] = '\0';
            
//             if(j>0 && temp[j-1] == 's'){
//                 strcpy(words[count], temp);
//                 count++;
//             }
//             j=0;
//             if(str[i]=='\0' || str[i]=='\n'){
//                 break;
//             }
//         }
//     }
    
//     for(i=0; i<count; i++){
//         printf("%s\n", words[i]);
//     }
//     return 0;
// }