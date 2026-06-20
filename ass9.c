/*

#include<stdio.h>
int main (){
    float cp, sp, p, l;
    printf("Enter cost price & selling price of a product: ");
    scanf("%f%f", &cp, &sp);
    if(sp > cp){
        p = sp - cp;
        printf("Profit = %.2f", p);
    } else if(cp > sp){
        l = cp - sp;
        printf("Loss = %.2f", l);
    } else {
        printf("no profit, no loss");
    }
        return 0;
}

#include<stdio.h>
int main(){
    float h, e, m, p, c, total;
    printf("Enter hindi marks: ");
    scanf("%f", &h);
    printf("Enter english marks: ");
    scanf("%f", &e);
    printf("Enter maths marks: ");
    scanf("%f", &m);
    printf("Enter physics marks: ");
    scanf("%f", &p);
    printf("Enter chemistry marks: ");
    scanf("%f", &c);
    total = h + e + m + p + c;
    if(total >= 33 + 33 + 33 + 33 + 33){
        printf("passed");
    } else {
        printf("fail");
    }
        return 0;
}

#include<stdio.h>
int main(){
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    if(ch >= 'A' && ch <= 'Z'){
        printf("Uppercase");
    } else if (ch >= 'a' && ch <= 'z')
    {
        printf("Lowercase");
    } else{
        printf("Not a valid character");
    }
        return 0;
}

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n % 3 == 0){
        printf("Divisible by 3");
    } else if (n % 2 == 0){
        printf("Divisible by 2");
    } else {
        printf("Not divisible by 3 or 2");
    }
        return 0;
}

*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n % 7 == 0){
        printf("Divisible by 7");
    } else if (n % 3 == 0){
        printf("Divisible by 3");
    } else {
        printf("Not divisible by 7 or 3");
    }
    return 0;
}