
#include <stdio.h>

int main()
{
    // for(int i=1; i<=3; i++){
    //     for(int j=1; j<=3-i; j++){
    //         printf(" ");
    //     }
    //     for(int j=1; j<=2*i-1; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // for(int i=1; i<=3; i++){
    //     for(int j=1; j<=i-1; j++){
    //         printf(" ");
    //     }
    //     for(int j=1; j<=2*(3-i)+1; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // for(int i=1; i<=5; i++){
    //     for(int j=1; j<=5-i; j++){
    //         printf(" ");
    //     }
    //     for(int j=1; j<=i; j++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // int n = 5;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%d", j);
    //     }
    //     for (int j = i - 1; j >= 1; j--)
    //     {
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }

    // char ch;
    // for (int i = 1; i <= 3; i++)
    // {
    //     ch = 'A';
    //     for (int j = 1; j <= i - 1; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int j = 1; j <= 2 * (3 - i) + 1; j++)
    //     {
    //         printf("%c", ch);
    //         ch++;
    //     }
    //     printf("\n");
    // }

    // int n = 3;
    // for (int i = n; i >= 1; i--)
    // {
    //     // Print leading spaces
    //     for (int j = n; j > i; j--)
    //     {
    //         printf(" ");
    //     }
    //     // Print A to highest letter
    //     for (char ch = 'A'; ch < 'A' + i; ch++)
    //     {
    //         printf("%c", ch);
    //     }
    //     // Print highest-1 back to A
    //     for (char ch = 'A' + i - 2; ch >= 'A'; ch--)
    //     {
    //         printf("%c", ch);
    //     }
    //     printf("\n");
    // }

    // for(int i=1; i<=4; i++){
    //     char ch='A';
    //     for(int j=1; j<=4; j++){
    //         if(j>=i){
    //             printf("%c", ch);
    //         } else {
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }

    // for(int i=1; i<=4; i++){
    //     char ch='A';
    //     for(int j=1; j<=4; j++){
    //         if(j<=i){
    //             printf("%c", ch);
    //         } else {
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }

    // for(int i=1; i<=4; i++){
    //     char ch='A';
    //     for(int j=1; j<=4; j++){
    //         if(i<=j){
    //             printf("%c", ch);
    //             ch++;
    //         } else {
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }

    // for(int i=1; i<=4; i++){
    //     char ch='A';
    //     for(int j=4; j>=1; j--){
    //         if(j>=i){
    //             printf("%c", ch);
    //             ch++;
    //         } else {
    //             printf(" ");
    //         }
    //     }

    //     for(int j=1; j<=4; j++){
    //         if(j>=i){
    //             printf("%c", ch);
    //             ch++;
    //         } else {
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }


    // print this pattern
    // ABCDEDCB
    // ABC  DCB
    // AB    CB
    // A      A
    // for(int i=1; i<=4; i++){
    //     char ch='A';
    //     for(int j=1; j<=4; j++){
    //         if(j<=5-i){
    //             printf("%c", ch);
    //             ch++;
    //         } else {
    //             printf(" ");
    //         }
    //     }
    //     for(int j=1; j<=4; j++){
    //         if(j>=i){
    //             printf("%c", ch);
    //             ch--;
    //         } else {
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }

    // print this pattern
    // 1234321
    // 123 321
    // 12   21
    // 1     1
    // for(int i=1; i<=4; i++){
    //     int num=1;
    //     for(int j=1; j<=4; j++){
    //         if(j<=5-i){
    //             printf("%d", num);
    //             num++;
    //         } else {
    //             printf(" ");
    //         }
    //     }

    //     for(int j=1; j<=4; j++){
    //         if(j>=i){
    //             printf("%d", num-2);
    //             num--;
    //         } else {
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }

    return 0;
}
