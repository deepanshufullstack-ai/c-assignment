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

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void convertLower(char str[]){
    for(int i=0; str[i]!='\0'; i++){
        str[i]=str[i]+32;
    }
    printf("%s", str);
}

void reverseStr(char str[]){
    int i, j;
    for(i=0; str[i]!='\0'; i++){
        printf("%c", str[i]);
    }
    printf("\n");
    for(j=i-1; j>=0; j--){
        printf("%c", str[j]);
    }
}

void countAlphabetDigitSpecialCharacter(char str[]){
    int a, d, s;
    for(int i=0; str[i]!='\0'; i++){
        if((str[i]>='A' && str[i]<='Z' ) || (str[i]>='a' && str[i]<='z')){
            a++;
        } else if(str[i]>='0' && str[i]<='9'){
            d++;
        } else {
            s++;
        }
    }
    printf("Alphabet count is %d\n", a);
    printf("Digit count is %d\n", d);
    printf("Special Character count is %d\n", s);
}

void copyStr(char str1[]){
    char str2[20];
    for(int i=0; str1[i]!='\0'; i++){
        str2[i]=str1[i];
    }
    printf("%s\n", str1);
    printf("%s\n", str2);
}

void findFirstOcc(char str[], char ch){
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==ch){
            printf("The given character is available at %d index", i);
            break;
        }
    }
}

int main(){
    // char str[10]="DEEPANSHU";
    // convertLower(str);
    
    // char str[10]="deepanshu";
    // reverseStr(str);
    
    // char str[20]="Deepanshu@22";
    // countAlphabetDigitSpecialCharacter(str);
    
    // char str1[20]="Deepanshu Mahawar";
    // copyStr(str1);
    
    char str[20]="Deepanshu";
    findFirstOcc(str, 'u');
    return 0;
}
























