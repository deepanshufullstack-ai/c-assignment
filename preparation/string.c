// string in c
#include<stdio.h>
#include<string.h>
int main(){
    // print all characters in string
    char str[]="Hello";
    for(int i=0; str[i]!='\0'; i++){
        printf("%c\n", str[i]);
    }

    // find the length of string
    char str1[]="Hello";
    int count=0;
    for(int i=0; str[i]!='\0'; i++){
        count++;
    }
    printf("Length: %d", count);

    // count vowels in string
    char str2[]="Hello World";
    int count1=0;
    for(int i=0; str2[i]!='\0'; i++){
        if(str2[i]=='a' || str2[i]=='e' || str2[i]=='i' || str2[i]=='o' || str2[i]=='u' || str2[i]=='A' || str2[i]=='E' || str2[i]=='I' || str2[i]=='O' || str2[i]=='U'){
            count1++;
        }
    }
    printf("Vowels: %d", count1);

    // count digit in string
    char str3[]="abc123xyz456";
    int count2=0;
    for(int i=0; str3[i]!='\0'; i++){
        if(str3[i]>='0' && str3[i]<='9'){
            count2++;
        }
    }
    printf("Count is %d", count2);

    // convert lowercase to uppercase
    char str4[]="hello";
    for(int i=0; str4[i]!='\0'; i++){
        if(str4[i]>='a' && str4[i]<='z'){
            str4[i]=str4[i]-32;
        }
    }
    printf("%s", str4);
    return 0;
}




















