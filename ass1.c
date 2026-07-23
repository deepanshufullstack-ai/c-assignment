// Q1 print hello students on the screen
// #include<stdio.h>
// int main(){
//     printf("Hello Students");
//     return 0;
// }

// Q2 print hello in the first line & students in second line
// #include<stdio.h>
// int main(){
//     printf("Hello\nStudents");
//     return 0;
// }

// Q3 print "mysirg" on the screen
// #include<stdio.h>
// int main(){
//     printf("\"mysirg\"\n");
//     return 0;
// }

// Q4 print \n on the screen
// #include<stdio.h>
// int main(){
//     printf("\\n");
//     return 0; 
// }

// Q5 print \r on the screen
// #include<stdio.h>
// int main(){
//     printf("\\r");
//     return 0;
// }

// Q6 use of \r
// #include<stdio.h>
// int main(){
//     printf("Hello world\rSuper");
//     return 0;
// }

// Q7 print "Teacher's day" on the screen
// #include<stdio.h>
// int main(){
//     printf("\"Teacher's days\"\n");
//     return 0;
// }

// Q8 calculate sum of two integers
// #include<stdio.h>
// int main(){
//     int a=4, b=4, sum;
//     sum = a+b;
//     printf("Sum of %d + %d = %d", a, b, sum);
//     return 0;
// }

// Q9 calculate square of a given numbers
// #include<stdio.h>
// int main(){
//     int num, square;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     square=num*num;
//     printf("square of %d is %d", num, square);
//     return 0;
// }

// Q10 calculate area of rectangle
// #include<stdio.h>
// int main(){
//     int l, w, area;
//     printf("Enter length & width of area: ");
//     scanf("%d%d", &l, &w);
//     area=l*w;
//     printf("Area of rectange is: %d", area);
//     return 0;
// }

// Q11 find the area of circle
// #include<stdio.h>
// int main(){
//     int r;
//     float area;
//     printf("Enter a radius of circle: ");
//     scanf("%d", &r);
//     area = 3.14*r*r;
//     printf("Area of circle is: %.2f", area);
//     return 0;
// }


//////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
void printHello(){
    printf("Hello");
}
void printHelloWorld(){
    printf("Hello\nStudents");
}
void printMySirG(){
    printf("\"MySirG\"");
}
void printTeacherDay(){
    printf("\"Teacher Day\"");
}
void sum(int a, int b){
    int sum = 0;
    sum=a+b;
    printf("Sum is %d", sum);
}
void square(int c){
    int square=0;
    square=c*c;
    printf("Square is %d", square);
}
void areaOfRectangle(int l, int w){
    int area=0;
    area=l*w;
    printf("Area is %d", area);
}
void areaOfCircle(float r){
    float area=0;
    area=3.14*r*r;
    printf("Area is %.2f", area);
}
int main() {
    // printHello();
    // printHelloWorld();
    // printMySirG();
    // printf("\\n");
    // printf("\\r");
    // printTeacherDay();
    // int a=10, b=10;
    // sum(a, b);
    // int c;
    // printf("Enter a number to find its square: ");
    // scanf("%d", &c);
    // square(c);
    // int l, w;
    // printf("Enter length or width of area: ");
    // scanf("%d%d",&l,&w);
    // areaOfRectangle(l, w);
    // float r;
    // printf("Enter radius of circle: ");
    // scanf("%f", &r);
    // areaOfCircle(r);
    return 0;
}