#include <stdio.h>
struct Address {
  char city[20];
  int pincode;
};

struct Student {
  int rollNo;
  char name[20];
  float marks;
  struct Address address;
};

void display(struct Student s);

int main() {
  // conceptual example
  struct Student s1;
  s1.rollNo = 101;
  s1.marks = 85.5;
  printf("Roll No: %d\n", s1.rollNo);
  printf("Marks: %.2f\n", s1.marks);

  // structue with user input
  struct Student s2;
  printf("Enter student roll number: ");
  scanf("%d", &s2.rollNo);

  printf("Enter student name: ");
  scanf("%s", s2.name);

  printf("Enter student marks: ");
  scanf("%f", &s2.marks);

  printf("Roll No: %d\n", s2.rollNo);
  printf("Name: %s\n", s2.name);
  printf("Marks: %.2f\n", s2.marks);

  // structure intialization
  struct Student s3 = {101, "Rahul", 80};
  printf("Roll No: %d\n", s3.rollNo);
  printf("Name: %s\n", s3.name);
  printf("Marks: %.2f\n", s3.marks);

  // multiple structure variables
  struct Student s4 = {101, "Rahul", 70};
  struct Student s5 = {102, "Abhishek", 80};
  printf("%d %s %.2f\n", s4.rollNo, s4.name, s4.marks);
  printf("%d %s %.2f\n", s5.rollNo, s5.name, s5.marks);

  // find highest marks
  if (s4.marks > s5.marks) {
    printf("%s has highest marks\n", s4.name);
  } else {
    printf("%s has highest marks\n", s5.name);
  }

  // array of structure
  struct Student s[3] = {
      {101, "Rahul", 10}, {102, "Amit", 20}, {103, "Raj", 30}};

  for (int i = 0; i < 3; i++) {
    printf("Roll No: %d\n", s[i].rollNo);
    printf("Name: %s\n", s[i].name);
    printf("Marks: %.2f\n", s[i].marks);
  }

  // find highest marks from array of structure
  int maxIndex = 0;
  for (int i = 1; i < 3; i++) {
    if (s[i].marks > s[maxIndex].marks) {
      maxIndex = i;
    }
  }
  printf("Student with highest marks:\n");
  printf("Roll No: %d\n", s[maxIndex].rollNo);
  printf("Name: %s\n", s[maxIndex].name);
  printf("Marks: %.2f\n", s[maxIndex].marks);

  // structure in function
  struct Student s6 = {10, "deepanshu", 56};
  display(s6);

  // structure pointer
  struct Student s7 = {102, 80};
  struct Student *ptr = &s7;
  printf("Roll No = %d\n", ptr->rollNo);
  printf("Marks = %.2f\n", ptr->marks);

  // nested structure initialization
  struct Student s8 = {101, "Rahul", 87.5, {"Bhopal", 462001}};
  printf("Roll No = %d\n", s8.rollNo);
  printf("Name = %s\n", s8.name);
  printf("City = %s\n", s8.address.city);
  printf("Pincode = %d\n", s8.address.pincode);
  return 0;
}

void display(struct Student s) {
  printf("Roll no=%d\n", s.rollNo);
  printf("Marks=%.2f", s.marks);
}
