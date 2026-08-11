// Q1 calculate length of string wihtout using strlen
// #include<stdio.h>
// int main(){
//     char str[100] = "Ratlam";
//     int i;
//     for(i=0; str[i]; i++);
//     printf("Length of string is: %d", i);
//     return 0;
// }

// Q2 count number of occurences of a character in a string
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[100], ch;
//     int i, count=0;
//     printf("Enter a string:");
//     fgets(str, 100, stdin);

//     printf("Enter a character to count:");
//     scanf("%c", &ch);

//     for(i=0; str[i]; i++){
//         if(str[i] == ch){
//             count++;
//         }
//     }
//     printf("The character '%c' appears %d times in the string.", ch, count);
//     return 0;
// }

// Q3 count number of vowels in a string
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[100];
//     int i, count=0;
//     printf("Enter a string: ");
//     fgets(str, 100, stdin);

//     for(i=0; str[i]; i++){
//         if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
//             count++;
//         }
//     }

//     printf("The number of vowels in the string is: %d", count);
//     return 0;
// }

// Q4 count number of spaces in a string
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[100];
//     int i, count=0;
//     printf("Enter a string: ");
//     fgets(str, 100, stdin);

//     for(i=0; str[i]; i++){
//         if(str[i]==' '){
//             count++;
//         }
//     }

//     printf("Number of spaces: %d", count);
//     return 0;
// }

// Q5 convert a string to uppercase
// #include<stdio.h>
// #include<stdio.h>

// int main(){
//     char str[100];
//     printf("Enter the string: ");
//     fgets(str, 100, stdin);
    
//     for(int i=0; str[i]; i++){
//         str[i]=str[i]-32;
//     }
    
//     printf("Uppercase string is: %s", str);
//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void calLen(char str[]){
    int i;
    for(i=0; str[i]!='\0'; i++){
        printf("%c", str[i]);
    }
    printf("\n%d", i);
}

void countOcc(char str[], char ch){
    int count=0;
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==ch){
            count++;
        }
    }
    printf("%c count is %d", ch, count);
}

void countVowel(char str[]){
    int count=0;
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]=='a' | str[i]=='e' | str[i]=='i' | str[i]=='o' | str[i]=='u' | str[i]=='A' | str[i]=='E' | str[i]=='I' | str[i]=='O' | str[i]=='U'){
            count++;
        }
    }
    printf("Vowel count is %d", count);
}

void countSpace(char str[]){
    int count=0;
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==' '){
            count++;
        }
    }
    printf("Space count is %d", count);
}

void convertUppercase(char str[]){
    for(int i=0; str[i]!='\0'; i++){
        str[i]=str[i]-32;
    }
    printf("%s", str);
}

int main(){
    // char str[10]="Deepanshu";
    // calLen(str);
    
    // char str[10]="Deepanshu";
    // countOcc(str, 'e');
    
    // char str[10]="Deepanshu";
    // countVowel(str);
    
    // char str[20]="Deepanshu Mahawar ";
    // countSpace(str);
    
    char str[10]="deepanshu";
    convertUppercase(str);
    return 0;
}