/*
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("Positive");
    }
    else if (n < 0)
    {
        printf("Negative");
    }
    else
    {
        printf("Zero");
    }
        return 0;
}

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z'){
        printf("Uppercase");
    }else if (ch >= 'a' && ch <= 'z')
    {
        printf("Lowercase");
    }else if (ch >= '0' && ch <= '9')
    {
        printf("Digit");
    }else
    {
        printf("Special character");
    }
    return 0;
}

#include<stdio.h>
int main(){
    int l1, l2, l3;
    printf("Enter the length of traingle sides:");
    scanf("%d %d %d", &l1, &l2, &l3);
    if(l1 == l2 && l2 == l3 && l3 == l1){
        printf("Valid");
    } else {
        printf("Not valid");
    }
}
*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter the month number: ");
    scanf("%d", &n);
    if(n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 11 || n == 12){
        printf("31 days");
    } else if(n == 4 || n==6 || n==9 || n==11){
        printf("30 days");
    } else {
        printf("29 days");
    }
}