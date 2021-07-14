#include<stdio.h>
int main()
{
    struct student
    {
        int r_no;
        char name[20];
        char section[5];
        char department[20];
        float fees;
        char grade[5];
        int total_marks;
    };

    struct student stud[2];
    for(int i=0;i<2;i++)
    {
        printf("Enter the details of Student %d : ",(i+1));
        printf("\nRoll no:");
        scanf("%d", &stud[i].r_no);
        printf("Student Name:");
        scanf("%s", stud[i].name);
        printf("Section:");
        scanf("%s", stud[i].section);
        printf("Department:");
        scanf("%s", stud[i].department);
        printf("Fees:");
        scanf("%f", &stud[i].fees);
        printf("Grade:");
        scanf("%s", stud[i].grade);
        printf("Total marks:");
        scanf("%d", &stud[i].total_marks);
    }
    int x;
    if(stud[0].total_marks>stud[1].total_marks)
    {
        x=0;
    }
    else
    {
        x=1;
    }
    printf("\nDetails of Student scoring highest: Student %d",(x+1) );
    printf("\nRoll no: = %d", stud[x].r_no);
    printf("\nName = %s", stud[x].name);
    printf("\nSection = %s", stud[x].section);
    printf("\nDepartment = %s", stud[x].department);
    printf("\nFees= %f", stud[x].fees);
    printf("\nGrade = %s", stud[x].grade);
    printf("\nTotal Marks = %d", stud[x].total_marks);
return 0;

}
