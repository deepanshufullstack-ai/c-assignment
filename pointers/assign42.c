// Q1
// #include<stdio.h>
// void swap(int *a, int *b){
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;
// }
// int main(){
//     int x=20, y=30;
//     printf("Befor swapping: x=%d, y=%d\n", x, y);
//     swap(&x, &y);
//     printf("After swapping: x=%d, y=%d\n", x, y);
//     return 0;
// }

// Q2
// #include<stdio.h>
// int findOccurrences(char *str, char ch, int *indices){
//     int count = 0;
//     int index = 0;

//     while(*str != '\0'){
//         if(*str==ch){
//             *indices = index;
//             indices++;
//             count++;
//         }
//         str++;
//         index++;
//     }
//     return count;
// }
// int main(){
//     char str[] = "programming";
//     char ch = 'm';

//     int indices[100];
//     int count = findOccurrences(str, ch, indices);

//     if(count == 0){
//         printf("Character '%c' not found\n", ch);
//     }
//     else {
//         printf("Character '%c' found at indices: ", ch);
//         for(int i=0; i<count; i++){
//             printf("%d ", *(indices + i));
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Q3
// #include<stdio.h>
// void toUpperCase(char *str){
//     while(*str != '\0'){
//         if(*str >= 'a' && *str <= 'z'){
//             *str = *str - 32;
//         }
//         str++;
//     }
// }
// int main(){
//     char str[] = "hello, world";
//     printf("Befor: %s\n", str);
//     toUpperCase(str);
//     printf("After: %s\n", str);
//     return 0;
// }

// Q4
// #include<stdio.h>
// void toLowerCase(char *str){
//     while(*str != '\0'){
//         if(*str >= 'A' && *str <= 'Z'){
//             *str = *str + 32;
//         }
//         str++;
//     }
// }
// int main(){
//     char str[] = "DEEPANSHU";
//     printf("Befor: %s\n", str);
//     toLowerCase(str);
//     printf("After: %s\n", str);
//     return 0;
// }

// Q5
// #include<stdio.h>
// void extractSubstring(char *source, char *dest, int start, int end){
//     int i=0;

//     source += start; 

//     while(start<=end && *source != '\0'){
//         *(dest+i) = *source;
//         source++;
//         i++;
//         start++;
//     }
//     *(dest+i) = '\0';
// }
// int main(){
//     char str[] = "Programming";
//     char subStr[100];
    
//     int start = 3;
//     int end = 7;

//     extractSubstring(str, subStr, start, end);

//     printf("Original string: %s\n", str);
//     printf("Extracted substring: %s\n", subStr);

//     return 0;
// }


//pointers
// #include <stdio.h>
// int main()
// {
//     int num = 10;
//     int *ptr;
//     ptr = &num;
//     printf("Value of num = %d\n", num);
//     printf("Address of num = %p\n", &num);
//     printf("Value stored in ptr = %p\n", ptr);
//     printf("Value using pointer = %d\n", *ptr);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int num = 10;
//     int *ptr = &num;
//     printf("Before = %d\n", num);
//     *ptr = 50;
//     printf("After = %d\n", num);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int num = 10;
//     int *ptr = &num;
//     int **pptr = &ptr;
//     printf("num = %d\n", num);
//     printf("*ptr = %d\n", *ptr);
//     printf("**pptr = %d\n", **pptr);
//     return 0;
// }

// #include <stdio.h>
// void swap(int *a, int *b)
// {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main()
// {
//     int x = 10;
//     int y = 20;
//     printf("Before swap: x = %d, y = %d\n", x, y);
//     swap(&x, &y);
//     printf("After swap: x = %d, y = %d\n", x, y);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int arr[] = {10, 20, 30, 40, 50};
//     int *ptr = arr;
//     for(int i = 0; i < 5; i++)
//     {
//         printf("%d ", *(ptr + i));
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int arr[] = {10, 20, 30, 40, 50};
//     int *ptr = arr;
//     for(int i = 0; i < 5; i++)
//     {
//         *(ptr + i) = *(ptr + i) * 2;
//     }
//     for(int i = 0; i < 5; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int arr[] = {10, 20, 30, 40};
//     int *ptr = arr;
//     printf("%d\n", *ptr);
//     ptr++;
//     printf("%d\n", *ptr);
//     ptr++;
//     printf("%d\n", *ptr);
//     return 0;
// }

// #include <stdio.h>
// struct Student
// {
//     int id;
//     float marks;
// };
// int main()
// {
//     struct Student s = {101, 85.5};
//     struct Student *ptr = &s;
//     printf("ID = %d\n", ptr->id);
//     printf("Marks = %.2f\n", ptr->marks);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int num = 10;
//     float value = 20.5;
//     void *ptr;
//     ptr = &num;
//     printf("Integer = %d\n", *(int*)ptr);
//     ptr = &value;
//     printf("Float = %.2f\n", *(float*)ptr);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int num1=10;
//     int num2=20;
//     int num3=30;
//     int *ptr[3];
//     ptr[0]=&num1;
//     ptr[1]=&num2;
//     ptr[2]=&num3;
//     for(int i=0; i<3; i++){
//         printf("%d ", *ptr[i]);
//     }
//     return 0;
// }

// dangling pointer
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int *ptr = malloc(sizeof(int));
//     *ptr = 100;
//     printf("Value = %d\n", *ptr);
//     free(ptr);
//     ptr = NULL;
//     return 0;
// }






