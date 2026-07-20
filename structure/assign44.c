// Q1
// #include<stdio.h>
// #include<string.h>

// struct Employee {
//     int id;
//     char name[50];
//     float salary;
// };

// int main(){
//     struct Employee emp;
    
//     emp.id =101;
//     strcpy(emp.name, "John");
//     emp.salary=50000.50;
    
//     printf("Emp ID: %d\n", emp.id);
//     printf("Emp name: %s\n", emp.name);
//     printf("Emp salary: %.2f\n", emp.salary);
    
//     return 0;
// }

// Q2
// #include<stdio.h>
// struct Employee {
//     int id;
//     char name[50];
//     float salary;
// };

// void inputEmployee(struct Employee *emp){
//     printf("Enter employee ID: ");
//     scanf("%d", &emp->id);
    
//     printf("Enter employee name: ");
//     scanf(" %[^\n]", emp->name);

//     printf("Enter employee salary: ");
//     scanf("%f", &emp->salary);
// }

// int main(){
//     struct Employee emp;
    
//     inputEmployee(&emp);
    
//     printf("ID: %d\n", emp.id);
//     printf("ID: %s\n", emp.name);
//     printf("ID: %.2f\n", emp.salary);
//     return 0;
// }

// Q3
// #include<stdio.h>
// struct Employee {
//     int id;
//     char name[50];
//     float salary;
// };

// void displayEmployee( struct Employee emp){
//     printf("Id: %d\n", emp.id);
//     printf("Name: %s\n", emp.name);
//     printf("Salary: %.2f\n", emp.salary);
// }

// int main(){
//     struct Employee emp = {101, "John Doe", 5000};
//     displayEmployee(emp);
//     return 0;
// }