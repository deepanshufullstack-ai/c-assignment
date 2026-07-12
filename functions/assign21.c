// Q1 function to calculate area of circle (TSRS)
// #include<stdio.h>
// float calculateAreaOfCircle(int r){
//     float area;
//     area = 3.14*r*r;
//     return area;
// }
// int main(){
//     int R;
//     float Area;
//     printf("Enter a radius of circle: ");
//     scanf("%d", &R);
//     Area=calculateAreaOfCircle(R);
//     printf("Area of circle is %.2f", Area);
//     return 0;
// }

// Q2 function to calculate simple interest (TSRS)
// #include<stdio.h>
// float calculateSI(float p, float r, float t){
//     float si;
//     si = (p*r*t)/100;
//     return si;
// }
// int main(){
//     float P, R, T, SI;
//     printf("Enter principal, rate & time to calculate the SI: ");
//     scanf("%f%f%f", &P, &R, &T);
//     SI = calculateSI(P, R, T);
//     printf("SI is %.2f", SI);
//     return 0;
// }

// Q3 function to check whether a given number is even or odd. return 1 if even & return 0 if odd (TSRS)
// #include<stdio.h>
// int checkEvenOrOdd(int num){
//     if(num % 2 == 0 ){
//         return 1;
//     } else {
//         return 0;
//     }
// }
// int main(){
//     int Num, value;
//     printf("Enter a number to check whether is even of odd: ");
//     scanf("%d", &Num);
//     value = checkEvenOrOdd(Num);
//     printf(value == 1 ? "%d is for even" : "%d is for odd", value);
//     return 0;
// }

// Q4 function to print n natural numbers (TSRN)
// #include<stdio.h>
// void printNaturalNumbers(int num){
//     int i=1;
//     while(i<=num){
//         printf("%d\n", i);
//         i++;
//     }
// }
// int main(){
//     int Num;
//     printf("Enter a number: ");
//     scanf("%d", &Num);
//     printNaturalNumbers(Num);
//     return 0;
// }

// Q4 function to print n odd natural numbers (TSRN)
// #include<stdio.h>
// void printOddNaturalNumbers(int num){
//     int i=1;
//     while (i<=num)
//     {
//         printf("%d\n", i*2-1);
//         i++;
//     }
// }
// int main(){
//     int Num;
//     printf("Enter a number: ");
//     scanf("%d", &Num);
//     printOddNaturalNumbers(Num);
//     return 0;
// }