#include<stdio.h>

void findLength(char str[]){
    int i;
    for(i=0; str[i]; i++){
        if(str[i]=='\0'){
            str[i]='\n';
        }
        printf("%c", str[i]);
    }
    printf("\n%d", i-1);
}

int main(){
    char str[20];
    printf("Enter a string: ");
    fgets(str, 20, stdin);
    findLength(str);
    return 0;
}

#include <stdio.h>

void findSecondHighest(int arr[], int n)
{
    int high, secHigh;

    high = arr[0];
    secHigh = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > high)
        {
            secHigh = high;
            high = arr[i];
        }
        else if (arr[i] > secHigh && arr[i] != high)
        {
            secHigh = arr[i];
        }
    }

    printf("%d is highest\n", high);
    printf("%d is second highest\n", secHigh);
}

int main()
{
    int s;

    printf("Enter size of array: ");
    scanf("%d", &s);

    int arr[s];

    printf("Enter %d elements in array:\n", s);

    for (int i = 0; i < s; i++)
    {
        scanf("%d", &arr[i]);
    }

    findSecondHighest(arr, s);

    return 0;
}

#include<stdio.h>
void reverseString(char str[]){
    int i, j;
    for(i=0; str[i]!='\0'; i++){
        printf("%c", str[i]);
    }
    printf("\n");
    for(j=i-1; j>=0; j--){
        printf("%c", str[j]);
    }
}
int main(){
    char str[10]="PlaceMaxx";
    reverseString(str);
    return 0;
}


#include <stdio.h>
#include <string.h>

void findFrequency(char str[])
{
    int sl = strlen(str);

    for (int i = 0; i < sl; i++)
    {
        int count = 1;
        if (str[i] == -1)
        {
            continue;
        }
        for (int j = i + 1; j < sl; j++)
        {
            if (str[i] == str[j])
            {
                count++;
                str[j] = -1;   
            }
        }

        printf("%c --> %d\n", str[i], count);
    }
}

int main()
{
    char str[20];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i=0; str[i]; i++){
        if(str[i]=='\n'){
            str[i]='\0';
        }
    }

    findFrequency(str);

    return 0;
}




#include <stdio.h>

#include <string.h>

struct Person {

    int id;

    char name[50];

    int age;

    char gender[10];

    char city[30];

    float income;

};

/* Function declarations */

void inputPeople(struct Person p[], int n);

void displayPeople(struct Person p[], int n);

void searchById(struct Person p[], int n);

void searchByCity(struct Person p[], int n);

void genderCount(struct Person p[], int n);

void ageStatistics(struct Person p[], int n);

void averageAge(struct Person p[], int n);

void highestIncome(struct Person p[], int n);


int main()

{

    struct Person p[50];

    int n;

    int choice;

    printf("Enter number of people: ");

    scanf("%d", &n);

    /* Input */

    inputPeople(p, n);

    /* Menu */

    do

    {

        printf("\n=================================\n");

        printf("      POPULATION CENSUS SYSTEM\n");

        printf("=================================\n");

        printf("1. Display All People\n");

        printf("2. Search Person by ID\n");

        printf("3. Search People by City\n");

        printf("4. Gender Count\n");

        printf("5. Age Statistics\n");

        printf("6. Average Age\n");

        printf("7. Highest Income Person\n");

        printf("8. Exit\n");

        printf("\nEnter your choice: ");

        scanf("%d", &choice);

        switch (choice)

        {

            case 1:

                displayPeople(p, n);

                break;

            case 2:

                searchById(p, n);

                break;

            case 3:

                searchByCity(p, n);

                break;

            case 4:

                genderCount(p, n);

                break;

            case 5:

                ageStatistics(p, n);

                break;

            case 6:

                averageAge(p, n);

                break;

            case 7:

                highestIncome(p, n);

                break;

            case 8:

                printf("\nProgram Closed.\n");

                break;

            default:

                printf("\nInvalid Choice.\n");

        }

    } while (choice != 8);

    return 0;

}


/* 1. Input Function */

void inputPeople(struct Person p[], int n)

{

    int i;

    for (i = 0; i < n; i++)

    {

        printf("\nEnter details of Person %d\n", i + 1);

        printf("Enter ID: ");

        scanf("%d", &p[i].id);

        printf("Enter Name: ");

        scanf(" %[^\n]", p[i].name);

        printf("Enter Age: ");

        scanf("%d", &p[i].age);

        printf("Enter Gender (Male/Female): ");

        scanf("%s", p[i].gender);

        printf("Enter City: ");

        scanf(" %[^\n]", p[i].city);

        printf("Enter Income: ");

        scanf("%f", &p[i].income);

    }

}


/* 2. Display Function */

void displayPeople(struct Person p[], int n)

{

    int i;

    printf("\n------ Population Details ------\n");

    for (i = 0; i < n; i++)

    {

        printf("\nID     : %d", p[i].id);

        printf("\nName   : %s", p[i].name);

        printf("\nAge    : %d", p[i].age);

        printf("\nGender : %s", p[i].gender);

        printf("\nCity   : %s", p[i].city);

        printf("\nIncome : %.2f", p[i].income);

        printf("\n--------------------------\n");

    }

}


/* 3. Search by ID */

void searchById(struct Person p[], int n)

{

    int searchId;

    int found = 0;

    int i;

    printf("Enter ID to search: ");

    scanf("%d", &searchId);

    //chandraveer complete this funcionality

    //Follow below format to print the values

        // printf("\nPerson Found\n");

        // printf("ID     : %d\n", p[i].id);

        // printf("Name   : %s\n", p[i].name);

        // printf("Age    : %d\n", p[i].age);

        // printf("Gender : %s\n", p[i].gender);

        // printf("City   : %s\n", p[i].city);

        // printf("Income : %.2f\n", p[i].income);

}


/* 4. Search by City */

void searchByCity(struct Person p[], int n)

{
    char cityName[20];
    
    printf("Enter city for search: ");
    scanf("%s", cityName);
    
    for(int i=0; i<n; i++){
        if(strcmp(p[i].city, cityName)==0){
        printf("\nID   : %d", p[i].id);
        printf("\nName : %s", p[i].name);
        printf("\nAge  : %d\n", p[i].age);
        }
    }

    //Depanshu complete this Function

        //Follow the below formate to print the values

        // printf("\nID   : %d", p[i].id);

        // printf("\nName : %s", p[i].name);

        // printf("\nAge  : %d\n", p[i].age);

}


/* 5. Gender Count */

void genderCount(struct Person p[], int n)

{

    int male = 0;

    int female = 0;

    int i;

    for (i = 0; i < n; i++)

    {

        if (strcmp(p[i].gender, "Male") == 0)

        {

            male++;

        }

        else if (strcmp(p[i].gender, "Female") == 0)

        {

            female++;

        }

    }

    printf("\nMale Population   : %d", male);

    printf("\nFemale Population : %d\n", female);

}


/* 6. Age Statistics */

void ageStatistics(struct Person p[], int n)

{

    int child = 0;

    int teenager = 0;

    int adult = 0;

    int senior = 0;

    int i;

    for (i = 0; i < n; i++)

    {

        if (p[i].age <= 12)

        {

            child++;

        }

        else if (p[i].age <= 17)

        {

            teenager++;

        }

        else if (p[i].age <= 59)

        {

            adult++;

        }

        else

        {

            senior++;

        }

    }

    printf("\nChildren        : %d", child);

    printf("\nTeenagers       : %d", teenager);

    printf("\nAdults          : %d", adult);

    printf("\nSenior Citizens : %d\n", senior);

}


/* 7. Average Age */

void averageAge(struct Person p[], int n)

{

    int totalAge = 0;

    float average;

    int i;

    for (i = 0; i < n; i++)

    {

        totalAge = totalAge + p[i].age;

    }

    average = (float)totalAge / n;

    printf("\nAverage Age = %.2f\n", average);

}


/* 8. Highest Income */

void highestIncome(struct Person p[], int n)

{

    int highestIncomeIndex = 0;

    int i;

    //pratik complete this function

    //Follow below formate to print the values 

    // printf("\nHighest Income Person\n");

    // printf("Name   : %s\n",

    //       p[highestIncomeIndex].name);

    // printf("Income : %.2f\n",

    //       p[highestIncomeIndex].income);

}

 