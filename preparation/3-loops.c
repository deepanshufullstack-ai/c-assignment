#include<stdio.h>
int main(){
    // for loop
    for(int i=0; i<=5; i++){
        printf("%d\n", i);
    }

    // while loop
    int i=1;
    while(i<=5){
        printf("%d\n", i);
        i++;
    }

    // do while loop
    int i1=1;
    do{
        printf("%d\n", i1);
        i1++;
    } while(i1<=5);

    // infinite loop
    while(1){
        printf("Deepanshu\n");
    }

    for(;;){
        printf("Deepanshu\n");
    }

    // break statement
    for(int i=0; i<=10; i++){
        if(i==5){
            break;
        }
        printf("%d\n", i);
    }

    // continue statement
    for(int i=1; i<=5; i++){
        if(i==3){
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}