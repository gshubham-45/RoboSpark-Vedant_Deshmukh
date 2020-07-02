#include <stdio.h>

struct StudentsInfo
{
    int id;
    int year;
    char name[30];
    float cgpa;
};
int main()
{
    struct StudentsInfo Student1;
    struct StudentsInfo Student2;
    struct StudentsInfo Student3;
    struct StudentsInfo Student4;
    int choice;

    printf("\n enter detail of Student1 : ");
    printf("\n enter name of student:");
    scanf("%s",Student1.name);
    printf("\n enter id of student:");
    scanf("%d",&Student1.id);
    printf("\n enter year of admission:");
    scanf("%d",&Student1.year);
    printf("\n enter students cgpa: ");
    scanf("%f",&Student1.cgpa);

    printf("\n enter detail of Student2 : ");
    printf("\n enter name of student:");
    scanf("%s",Student2.name);
    printf("\n enter id of student:");
    scanf("%d",&Student2.id);
    printf("\n enter year of admission:");
    scanf("%d",&Student2.year);
    printf("\n enter students cgpa : ");
    scanf("%f",&Student2.cgpa);

    printf("\n enter detail of Student3 : ");
    printf("\n enter name of student:");
    scanf("%s",Student3.name);
    printf("\n enter id of student:");
    scanf("%d",&Student3.id);
    printf("\n enter year of admission:");
    scanf("%d",&Student3.year);
    printf("\n enter students cgpa: ");
    scanf("%f",&Student3.cgpa);

    printf("\n enter detail of Student4 : ");
    printf("\n enter name of student:");
    scanf("%s",Student4.name);
    printf("\n enter id of student:");
    scanf("%d",&Student4.id);
    printf("\n enter year of admission:");
    scanf("%d",&Student4.year);
    printf("\n enter students cgpa: ");
    scanf("%f",&Student4.cgpa);

printf("\nenter 1 for student1 detail,2 for student2 like wise upto 4\n");
scanf("%d",&choice);
switch (choice)
{
case 1:
    printf("\n Student1 details:\n");
        printf("\n name:  ");
        printf("%s",Student1.name);
        printf("\nid: %d ",Student1.id);
        printf("\nAdmission Year : %d",Student1.year);
        printf("\nCGPA : %f",Student1.cgpa);
    break;

case 2:
    printf("\n Student1 details:\n");
        printf("\n name:  ");
        printf("%s",Student2.name);
        printf("\nid: %d ",Student2.id);
        printf("\nAdmission Year : %d",Student2.year);
        printf("\nCGPA : %f",Student2.cgpa);
    break;

case 3:
    printf("\n Student1 details:\n");
        printf("\n name:  ");
        printf("%s",Student3.name);
        printf("\nid: %d ",Student3.id);
        printf("\nAdmission Year : %d",Student3.year);
        printf("\nCGPA : %f",Student3.cgpa);
    break;

case 4:
    printf("\n Student1 details:\n");
        printf("\n name:  ");
        printf("%s",Student4.name);
        printf("\nid: %d ",Student4.id);
        printf("A\ndmission Year : %d",Student4.year);
        printf("\nCGPA : %f",Student4.cgpa);
    break;

default:
    printf("\n Student1 details:\n");
        printf("\n name:  ");
        printf("%s",Student1.name);
        printf("\nid: %d ",Student1.id);
        printf("\nAdmission Year : %d",Student1.year);
        printf("\nCGPA : %f",Student1.cgpa);
    break;
}
     
    
                return 0;
}