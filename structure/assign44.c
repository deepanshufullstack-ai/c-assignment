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

// Q4
// #include<stdio.h>
// struct Employee {
//   int id;
//   char name[20];
//   float salary;
// };

// void inputEmployee(struct Employee *emp){
//     printf("\nEnter employee Id: ");
//     scanf("%d", &emp->id);
    
//     printf("Enter employee name: ");
//     scanf(" %[^\n]", emp->name);
    
//     printf("Enter employee salary: ");
//     scanf("%f", &emp->salary);
// }

// void displayEmployee(struct Employee emp){
//     printf("\nEmployee Details");
//     printf("\nId: %d", emp.id);
//     printf("\nName: %s", emp.name);
//     printf("\nSalary: %.2f", emp.salary);
// }

// void highestSalaryEmployee(struct Employee emp[], int size){
//     int maxIndex = 0;
    
//     for(int i=1; i<size; i++){
//         if(emp[i].salary > emp[maxIndex].salary){
//             maxIndex = i;
//         }
//     }
//     printf("\n\nEmployee with Highest Salary");
//     displayEmployee(emp[maxIndex]);
// }

// int main(){
//     struct Employee employees[5];
    
//     printf("Enter details for 5 employees\n");
    
//     for(int i=0; i<5; i++){
//         printf("\nEmployee %d", i);
//         inputEmployee(&employees[i]);
//     }
    
//     printf("\n\nAll employee details");
//     for(int i=0; i<5; i++){
//         displayEmployee(employees[i]);
//     }
    
//     highestSalaryEmployee(employees, 5);
    
//     return 0;
// }

// Q5
// #include<stdio.h>
// struct Employee {
//     int id;
//     char name[20];
//     float salary;
// };
// void inputEmp(struct Employee *emp){
//     printf("\nEnter employee Id: ");
//     scanf("%d", &emp->id);
    
//     printf("Enter employee name: ");
//     scanf(" %[^\n]", emp->name);
    
//     printf("Enter employee salary: ");
//     scanf("%f", &emp->salary);
// }
// void displayEmp(struct Employee emp){
//     printf("%d\t%s\t%.2f\n", emp.id, emp.name, emp.salary);
// }
// void sortBySalary(struct Employee emp[], int n){
//     struct Employee temp;
//     for(int i=0; i<n-1; i++){
//         for(int j=0; j<n-i-1; j++){
//             if(emp[j].salary > emp[j+1].salary){
//                 temp=emp[j];
//                 emp[j]=emp[j+1];
//                 emp[j+1]=temp;
//             }
//         }
//     }
// }
// int main(){
//     struct Employee emps[5];
//     for(int i=0; i<5; i++){
//         printf("Employee %d", i+1);
//         inputEmp(&emps[i]);
//     }
//     printf("\n\nEmployee details before sorting:\n");
//     for(int i=0; i<5; i++){
//         displayEmp(emps[i]);
//     }
//     sortBySalary(emps, 5);
//     printf("\n\nEmployee details after sorting:\n");
//     for(int i=0; i<5; i++){
//         displayEmp(emps[i]);
//     }
//     return 0;
// }

// Q6
// #include<stdio.h>
// #include<string.h>
// struct Employee {
//     int id;
//     char name[20];
//     float salary;
// };

// void inputEmp(struct Employee *emp){
//     printf("\nEnter employee Id: ");
//     scanf("%d", &emp->id);
    
//     printf("Enter employee name: ");
//     scanf(" %[^\n]", emp->name);
    
//     printf("Enter employee salary: ");
//     scanf("%f", &emp->salary);
// }

// void displayEmp(struct Employee emp){
//     printf("%d\t%s\t%.2f\n", emp.id, emp.name, emp.salary);
// }

// void sortByName(struct Employee emp[], int n){
//     struct Employee temp;
//     for(int i=0; i<n-1; i++){
//         for(int j=0; j<n-i-1; j++){
//             if(strcmp(emp[j].name, emp[j+1].name)>0){
//                 temp=emp[j];
//                 emp[j]=emp[j+1];
//                 emp[j+1]=temp;
//             }
//         }
//     }
// }

// int main(){
//     struct Employee emps[5];
    
//     for(int i=0; i<5; i++){
//         printf("Employee %d", i+1);
//         inputEmp(&emps[i]);
//     }
    
//     printf("\n\nEmployee details before sorting:\n");
//     for(int i=0; i<5; i++){
//         displayEmp(emps[i]);
//     }
    
//     sortByName(emps, 5);
    
//     printf("\n\nEmployee details after sorting:\n");
//     for(int i=0; i<5; i++){
//         displayEmp(emps[i]);
//     }
    
//     return 0;
// }
