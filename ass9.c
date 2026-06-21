// Q1 print the profit or loss percentage of any product via cost price & selling price
// #include <stdio.h>
// int main()
// {
//     float cp, sp, p, pp, l, lp;
//     printf("Enter CP or SP of product: ");
//     scanf("%d%d", &cp, &sp);

//     if (sp > cp)
//     {
//         printf("We have in profit");
//         p=sp-cp;
//         pp=(p/cp)*100;
//         printf("Profit percetage: %.2f", pp);
//     }
//     else
//     {
//         printf("We have in loss");
//         l=cp-sp;
//         lp=(l/cp)*100;
//         printf("Loss percetage: %.2f", lp);
//     }
//     return 0;
// }

// Q2 take marks of 5 subject according to this display whether the candidate passed of fail
// #include <stdio.h>
// int main()
// {
//     float H, E, M, P, C;
//     printf("Enter hindi marks: ");
//     scanf("%f", &H);
//     printf("Enter english marks: ");
//     scanf("%f", &E);
//     printf("Enter maths marks: ");
//     scanf("%f", &M);
//     printf("Enter physics marks: ");
//     scanf("%f", &P);
//     printf("Enter chemistry marks: ");
//     scanf("%f", &C);
//     if ((H >= 33) && (E >= 33) && (M >= 33) && (P >= 33) && (C >= 33))
//     {
//         printf("Passed");
//     }
//     else
//     {
//         printf("Failed");
//     }
//     return 0;
// }

// Q3 given alphabet is uppercase or lowercase
// #include <stdio.h>
// int main()
// {
//     char ch;
//     printf("Enter any character: ");
//     scanf("%c", &ch);
//     if(ch>='A' && ch<='Z'){
//         printf("Uppecase");
//     } else if(ch>='a' && ch<='z'){
//         printf("Lowercase");
//     } else {
//         printf("May be number or special character");
//     }
//     return 0;
// }

// Q4 whether a given number is divisible by 3 & 2
// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     if(num%3==0 && num%2==0){
//         printf("Number is divisible by 3 & 2");
//     } else {
//         printf("Not divisible by 3 & 2");
//     }
//     return 0;
// }

// Q5 whether a given number is divisible by 7 or 3
// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     if(num%7==0 && num%3==0){
//         printf("Number is divisible by 7 & 3");
//     } else {
//         printf("Not divisible by 7 & 3");
//     }
//     return 0;
// }