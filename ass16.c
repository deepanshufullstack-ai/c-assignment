// Q1 find the nth term of fibonacci series
// #include <stdio.h>
// int main()
// {
//     int n, i;
//     int a = 0, b = 1, c;
//     printf("Enter a value of n: ");
//     scanf("%d", &n);

//     if (n == 1)
//     {
//         printf("the %dth fibonacci term is %d\n", n, a);
//     }
//     else if (n == 2)
//     {
//         printf("the %dth fibonacci term is %d\n", n, a);
//     }
//     else
//     {
//         for (i = 3; i <= n; i++)
//         {
//             c = a + b;
//             printf("c=%d\n", c);
//             a = b;
//             printf("a=%d\n", a);
//             b = c;
//             printf("b=%d\n\n", b);
//         }
//         printf("the %d is fibonacci number is %d\n", n, b);
//     }
//     return 0;
// }

// Q2 print first n term of fibonacci series
// #include<stdio.h>
// int main(){
//     int n, i;
//     int a=0, b=1, c;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);
//     for(i=1; i<=n; i++){
//         printf("%d\n", a);
//         c=a+b;
//         a=b;
//         b=c;
//     }
//     return 0;
// }

// Q3 given number is in fibonacci series or not
// #include<stdio.h>
// int main(){
//     int n, i;
//     int a=0, b=1, c;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     if(n==0 || n==1){
//         printf("%d is a fibonacci number\n", n);
//         return 0;
//     }

//     while(b<n){
//         c=a+b;
//         a=b;
//         b=c;
//     }

//     if(b==n){
//         printf("%d is a fibonacci number", n);
//     } else {
//         printf("%d is not a fibonacci number", n);
//     }
//     return 0;
// }

// Q4 check whether the given number is armstrong or not
// #include <stdio.h>
// int main() {
//   int num, digit, sum = 0, temp;
//   printf("Enter a three digit number to find is armstrong or not: ");
//   scanf("%d", &num);
//   temp = num;
//   while (temp > 0) {
//     digit = temp % 10;
//     printf("digit=%d\n", digit);
//     sum = sum + digit * digit * digit;
//     printf("sum=%d\n", sum);
//     temp = temp / 10;
//     printf("num=%d\n\n", temp);
//   }
//   if (num == sum) {
//     printf("%d is armstrong", sum);
//   } else {
//     printf("%d is not armstrong", sum);
//   }
//   return 0;
// }

// #include<stdio.h>
// int main(){
//     int n, temp, d, sum=0, count=0, temp2, p=1;
//     printf("Enter a number: ");
//     scanf("%d", &n);
    
//     temp=n;
    
//     while(temp>0){
//         d=temp%10;
//         count++;
//         temp=temp/10;
//     }

//     temp2=n;
    
//     while(temp2>0){
//         d=temp2%10;
//         p=1;
//         for(int i=1; i<=count; i++){
//             p=p*d;
//         }
//         // while(count>0){
//         //     p=p*d;
//         //     count--;
//         // }
        
//         sum=sum+p;
//         temp2=temp2/10;
//     }
//     printf("Sum = %d\n", sum);
    
//     if(sum==n){
//         printf("Armstrong");
//     } else {
//         printf("Not armstrong");
//     }
    
//     return 0;
// }




// Q5 print all armstrong under 1000
// #include<stdio.h>
// int main(){
//     int num, temp, sum, digit;
//     for(num=1; num<=1000; num++){
//         temp=num;
//         sum=0;
//         while(temp>0){
//             digit=temp%10;
//             sum=sum+digit*digit*digit;
//             temp=temp/10;
//         }

//         if(sum==num){
//             printf("%d ", num);
//         }
//     }
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int num, temp, digit, count = 0;
//     int sum = 0;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     temp = num;

//     // Count number of digits
//     while (temp > 0) {
//         count++;
//         temp /= 10;
//     }
//     printf("count = %d\n", count);

//     temp = num;

//     // Calculate Armstrong sum
//     while (temp > 0) {
//         digit = temp % 10;

//         int power = 1;
//         for (int i = 0; i < count; i++) {
//             power *= digit;
//             printf("power = %d\n", power);
//         }
//         printf("power = %d\n", power);

//         sum += power;
//         printf("sum = %d\n\n", sum);
//         temp /= 10;
//     }

//     // Check Armstrong
//     if (sum == num) {
//         printf("%d is an Armstrong number.\n", num);
//     } else {
//         printf("%d is not an Armstrong number.\n", num);
//     }

//     return 0;
// }



////////////////////////////////////////////////////////////////


#include<stdio.h>
void findNthTermOfFibonacci(int n){
    int a=0, b=1, c;
    if(n==a){
        printf("%d is first fibonacci number", n);
    } else if(n==b){
        printf("%d is second fibonacci number", n);
    } else {
        for(int i=2; i<=n; i++){
            c=a+b;
            a=b;
            b=c;
        }
        printf("%d is the %dth term of fibonacci series", b, n);
    }
}

void printFirstNTermsOfFibonacciSeries(int n1){
    int a=0, b=1, c;
    for(int i=1; i<=n1; i++){
        printf("%d\n", a);
        c=a+b;
        a=b;
        b=c;
    }
}

void isFibonacciOrNot(int n2){
    int a=0, b=1, c;
    
    while(b<n2){
        c=a+b;
        a=b;
        b=c;
    }
    
    if(b==n2){
        printf("Fibonacci number");
    } else {
        printf("Not fibonacci number");
    }
}

void isArmStrongOrNot(int n3) {
    int temp1, temp2, digit;
    int count = 0, power, sum = 0;

    temp1 = n3;

    while (temp1 > 0) {
        digit = temp1 % 10;
        count++;
        temp1 = temp1 / 10;
    }

    temp2 = n3;

    while (temp2 > 0) {
        digit = temp2 % 10;

        power = 1;
        for (int i = 1; i <= count; i++) {
            power = power * digit;
        }

        sum = sum + power;
        temp2 = temp2 / 10;
    }

    // if (n3 == sum) {
    //     printf("Armstrong");
    // } else {
    //     printf("Not Armstrong");
    // }
    if(n3==sum){
        printf("%d\n", n3);
    }
}


int main(){
    // int n;
    // printf("Enter a number: ");
    // scanf("%d", &n);
    // findNthTermOfFibonacci(n);
    // int n1; 
    // printf("Enter a number: ");
    // scanf("%d", &n1);
    // printFirstNTermsOfFibonacciSeries(n1);
    // int n2;
    // printf("Enter a number: ");
    // scanf("%d", &n2);
    // isFibonacciOrNot(n2);
    // int n3;
    // printf("Enter a number: ");
    // scanf("%d", &n3);
    // isArmStrongOrNot(n3);
    for(int i=1; i<=1000; i++){
        isArmStrongOrNot(i);
    }
    return 0;
}