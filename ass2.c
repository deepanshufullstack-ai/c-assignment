// Q1 find average of three numbers  ===> (a+b+c)/3
// #include<stdio.h>
// int main(){
//     int a, b, c, average;
//     printf("Enter three numbers: ");
//     scanf("%d%d%d", &a, &b, &c);
//     average=(a+b+c)/3;
//     printf("Average = %d", average);
//     return 0;
// }

// Q2 calculate circumference of a circle  ===> 2*PI*radius
// #include<stdio.h>
// int main(){
//     int radius;
//     float cir;
//     printf("Enter radius of circle: ");
//     scanf("%d", &radius);
//     cir = 2*3.14*radius;
//     printf("Circumference of circle = %.2f", cir);
//     return 0;
// }

// Q3 calculate simple interest  ===> (p*r*t)/100
// #include<stdio.h>
// int main(){
//     int p, r, t;
//     float SI;
//     printf("Enter principal, rate, time: ");
//     scanf("%d%d%d", &p, &r, &t);
//     SI = (p*r*t)/100;
//     printf("SI is %f", SI);
//     return 0;
// }

// Q4 calculate volume of cuboid  ===> l*w*h
// #include<stdio.h>
// int main(){
//     int l, w, h, v;
//     printf("Enter length, width, height: ");
//     scanf("%d%d%d", &l, &w, &h);
//     v = l*w*h;
//     printf("Volume is %d", v);
//     return 0;
// }

// Q5 calculate the profit or loss earned upon selling 25 bananas
// #include<stdio.h>
// int main(){
//     int cp, sp;
//     printf("Enter cost price or selling price of bananas: ");
//     scanf("%d%d", &cp, &sp);
//     printf("Profit/loss: %d", (sp-cp)*25);
//     return 0;
// }


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void calAvgThree(float a, float b, float c){
    float avg=0;
    avg=(a+b+c)/3;
    printf("Average is %.2f", avg);
}
void calCircumference(float r){
    float cir=0;
    cir=2*3.14*r;
    printf("Cir is %.2f", cir);
}
void calSI(float p, float r, float t){
    float SI=0;
    SI=(p*r*t)/100;
    printf("SI is %.2f", SI);
}
void calVolCuboid(int l, int w, int h){
    int vol=0;
    vol=l*w*h;
    printf("Vol is %d", vol);
}
void calProfitOrLoss(float cp, float sp){
    float cp25=0, sp25=0, result=0;
    cp25=(cp/12)*25;
    sp25=(sp/12)*25;
    result = sp25 - cp25;
    if(result > 0){
        printf("Profile = %.2f", result);
    } else if(result < 0){
        printf("Loss = %.2f", -result);
    } else {
        printf("No profit, No loss");
    }
}
int main(){
    // float a, b, c;
    // printf("Enter three numbers to calculate avg: ");
    // scanf("%f%f%f", &a, &b, &c);
    // calAvgThree(a, b, c);
    // float r;
    // printf("Enter radius of circle: ");
    // scanf("%f", &r);
    // calCircumference(r);
    // float p, r, t;
    // printf("Enter p, r & t value to cal SI: ");
    // scanf("%f%f%f", &p, &r, &t);
    // calSI(p, r, t);
    // int l, w, h;
    // printf("Enter l, w & h of cuboid: ");
    // scanf("%d%d%d", &l, &w, &h);
    // calVolCuboid(l, w, h);
    float cp, sp;
    printf("Enter cost price & selling price of one dozen banana: ");
    scanf("%f%f", &cp, &sp);
    calProfitOrLoss(cp, sp);
    return 0;
}