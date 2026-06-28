// Q1 find grade of student
//  #include <stdio.h>
//  int main() {
//      int marks;
//      printf("Enter student marks: ");
//      scanf("%d", &marks);
//      switch(marks){
//          case 90 ... 100:
//          printf("Student obtained grade a");
//          break;
//          case 80 ... 89:
//          printf("Student obtained grade b");
//          break;
//          case 70 ... 79:
//          printf("Student obtauned grade c");
//          break;
//          case 60 ... 69:
//          printf("Student obtained grade d");
//          break;
//          case 50 ... 59:
//          printf("Student obtained grade e");
//          break;
//          case 1 ... 49:
//          printf("Student obtained grade f");
//          break;
//          default:
//          printf("Invalid marks");
//      }
//      return 0;
//  }

// Q2 menu driven program
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     int choice;
//     while(1){
//         printf("\n1. find factorial of number");
//         printf("\n2. Check even or odd");
//         printf("\n3. find area of circle");
//         printf("\n4. sum of first n natural numbers");
//         printf("\n5. exit");
//         printf("\nEnter your choice: ");
//         scanf("%d", &choice);
//         switch(choice){
//             case 1:
//             int num, fact=1;
//             printf("Enter a number: ");
//             scanf("%d", &num);
//             while(num>=1){
//                 fact=fact*num;
//                 num--;
//             }
//             printf("Fact=%d", fact);
//             break;
//             case 2:
//             int num1;
//             printf("Enter a number: ");
//             scanf("%d", &num1);
//             if(num1%2==0){
//                 printf("even");
//             } else {
//                 printf("odd");
//             }
//             break;
//             case 3:
//             float radius, area;
//             printf("Enter radius of circle: ");
//             scanf("%f", &radius);
//             area=3.14*radius*radius;
//             printf("area=%f", area);
//             break;
//             case 4:
//             int num3, sum=0;
//             printf("Enter a number: ");
//             scanf("%d", &num3);
//             for(int i=1; i<=num3; i++){
//                 sum=sum+i;
//             }
//             printf("Sum=%d", sum);
//             break;
//             case 5:
//             exit(0);
//             default:
//             printf("Invalid task");
//         }
//     }
//     return 0;
// }

// Q3 given character is lowercase uppecase or digit
// #include <stdio.h>
// int main() {
//     char ch;
//     printf("Enter a character: ");
//     scanf("%c", &ch);
//     switch(ch){
//         case 'a' ... 'z':
//         printf("Lower case character");
//         break;
//         case 'A' ... 'Z':
//         printf("Upper case character");
//         break;
//         case 0 ... 9:
//         printf("Digit");
//         break;
//         default:
//         printf("Special character");
//     }
//     return 0;
// }

// Q4 print given character is vowel of consonant
// #include <stdio.h>
// int main() {
//   char ch;
//   printf("Enter a character: ");
//   scanf("%c", &ch);
//   switch (ch) {
//   case 'a':
//   case 'e':
//   case 'i':
//   case 'o':
//   case 'u':
//   case 'A':
//   case 'E':
//   case 'I':
//   case 'O':
//   case 'U':
//     printf("Vowel");
//     break;
//   default:
//     if ((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')) {
//       printf("Consonant");
//     } else {
//       printf("Not an alphabet");
//     }
//   }
//   return 0;
// }

// Q5 menu driven program
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     int choice;
//     while (1) {
//         printf("\n1. Calculate LCM of two numbers");
//         printf("\n2. Calculate the sum of digits of a number");
//         printf("\n3. Volume of a cuboid");
//         printf("\n4. Check whether a given number is prime or not");
//         printf("\n5. Exit");
//         printf("\n\nEnter your choice: ");
//         scanf("%d", &choice);
//         switch (choice) {
//             case 1: {
//                 int max, n1, n2;
//                 printf("Enter two numbers: ");
//                 scanf("%d %d", &n1, &n2);
//                 max = (n1 > n2) ? n1 : n2;
//                 while (1) {
//                     if (max % n1 == 0 && max % n2 == 0) {
//                         printf("LCM = %d\n", max);
//                         break;
//                     }
//                     max++;
//                 }
//                 break;
//             }
//             case 2: {
//                 int sum = 0, digit, num;
//                 printf("Enter a number: ");
//                 scanf("%d", &num);
//                 while (num > 0) {
//                     digit = num % 10;
//                     sum += digit;
//                     num /= 10;
//                 }
//                 printf("Sum = %d\n", sum);
//                 break;
//             }
//             case 3: {
//                 int l, w, h, v;
//                 printf("Enter the length, width, and height: ");
//                 scanf("%d %d %d", &l, &w, &h);
//                 v = l * w * h;
//                 printf("Volume = %d\n", v);
//                 break;
//             }

//             case 4: {
//                 int num1, prime = 1;

//                 printf("Enter a number: ");
//                 scanf("%d", &num1);

//                 if (num1 < 2) {
//                     prime = 0;
//                 } else {
//                     for (int i = 2; i <= num1 / 2; i++) {
//                         if (num1 % i == 0) {
//                             prime = 0;
//                             break;
//                         }
//                     }
//                 }

//                 if (prime)
//                     printf("%d is a Prime Number\n", num1);
//                 else
//                     printf("%d is Not a Prime Number\n", num1);

//                 break;
//             }

//             case 5:
//                 printf("Exiting program...\n");
//                 exit(0);

//             default:
//                 printf("Invalid choice! Please enter a number between 1 and 5.\n");
//         }
//     }

//     return 0;
// }