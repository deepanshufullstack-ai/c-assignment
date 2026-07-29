#include <stdio.h>
// print starts like
// *
// **
// ***
// ****
void pattern1(){
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            if(j<=i){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void pattern2(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j<=i){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// print starts like
//     *
//    **
//   ***
//  ****
void pattern3(int n){
    for(int i=1; i<=n; i++){
        for(int j=n; j>=1; j--){
            if(j<=i){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void pattern4(int n){
        for(int i=n; i>=1; i--){
        for(int j=1; j<=n; j++){
            if(j<i){
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
}

// print starts like
// ****
// ***
// **
// *
void pattern5(){
    for(int i=1; i<=5; i++){
        for(int j=5; j>=1; j--){
            if(j>=i){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }  
}

void pattern6(int n){
    for(int i=1; i<=n; i++){
        for(int j=n; j>=1; j--){
            if(j>=i){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// print starts like
// ****
//  ***
//   **
//    *
void pattern7(int n){
    for(int i=n; i>=1; i--){
        for(int j=n; j>=1; j--){
            if(j<=i){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// print numbers like
// 1
// 12
// 123
// 1234
void pattern8(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j<=i){
                printf("%d", j);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// print alphabet like
// ABCD
// ABCD
// ABCD
void pattern9(){
    for(int i=1; i<=4; i++){
        for(int j='A'; j<='D'; j++){
            printf("%c", j);
        }
        printf("\n");
    }
}

// print number like
// 1234
// 1234
// 1234
void pattern10(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%d", j);
        }
        printf("\n");
    }
}

// print number like
// 123
// 456
// 789
void pattern11(int n){
    int num=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%d", num);
            num++;
        }
        printf("\n");
    }
}

// print number like
// 1
// 21
// 321
// 4321
void pattern12(){
    for(int i=1; i<=5; i++){
        for(int j=i; j>=1; j--){
            if(j<=i){
                printf("%d", j);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void pattern13(int n){
    for(int i=1; i<=n; i++){
        for(int j=i; j>=1; j--){
            if(j<=i){
                printf("%d", j);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// print alphabet like
// ABCD
//  ABC
//   AB
//    A
void pattern14(){
    for(int i=5; i>=1; i--){
        char ch='A';
        for(int j=5; j>=1; j--){
            if(j<=i){
                printf("%c", ch);
                ch++;
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void pattern15(int n){
    for(int i=n; i>=1; i--){
        char ch='A';
        for(int j=n; j>=1; j--){
            if(j<=i){
                printf("%c", ch);
                ch++;
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// print numbers like
// 1
// 23
// 456
// 78910
void pattern16(){
    int num=1;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            if(j<=i){
                printf("%d", num);
                num++;
            }else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void pattern17(int n){
    int num=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j<=i){
                printf("%d", num);
                num++;
            }else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// print alphabet like
// ABCD
//  BCD
//   CD
//    D
void pattern18(){
    char ch='A';
    for(int i=5; i>=1; i--){
        ch='A';
        for(int j=5; j>=1; j--){
            if(j<=i){
              printf("%c", ch);
              ch++;
            } else {
              ch++;
            printf(" ");
            }
        }
        printf("\n");
    }
}

void pattern19(int n){
    char ch='A';
    for(int i=n; i>=1; i--){
        ch='A';
        for(int j=n; j>=1; j--){
            if(j<=i){
              printf("%c", ch);
              ch++;
            } else {
              ch++;
            printf(" ");
            }
        }
        printf("\n");
    }
}

// print star like
// *****
// *   *
// *   *
// *   *
// *****
void pattern20(){
    for(int i=1; i<=4; i++){
        for(int j=1; j<=4; j++){
            if (i == 1 || i == 4 || j == 1 || j == 4) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void pattern21(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    pattern1();
    pattern2(5);
    pattern3(5);
    pattern4(5);
    pattern5();
    pattern6(5);
    pattern7(5);
    pattern8(5);
    pattern9();
    pattern10(5);
    pattern11(3);
    pattern12();
    pattern13(5);
    pattern14();
    pattern15(5);
    pattern16();
    pattern17(5);
    pattern18();
    pattern19(5);
    pattern20();
    pattern21(5);
    return 0;
}






















