#include <stdio.h>
struct stu
{
    char name[50];
    int usn;
    int marks[3];
};

int main()
{
    // this section collects all the data

    int n, j, i;
    printf("Enter the number of students \n");
    scanf("%d", &n);
    struct stu data[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter the name of the student %d\n", i + 1);
        scanf("%s", data[i].name);
        printf("Enter the USN of the student %d \n", i + 1);
        scanf("%d", &data[i].usn);
        printf("\n \t Enter the marks of the students \n");

        for (j = 0; j < 3; j++)
        {
            printf("Marks in Subject %d \n", j + 1);
            scanf("%d", &data[i].marks[j]);
        }
    }

    printf("\n\n\n");

    // this section prints all the data

    for (i = 0; i < n; i++)
    {
        printf("Student %d is\n", i + 1);
        printf("%s \n", data[i].name);
        printf("USN of Student %d is\n", i + 1);
        printf("%d \n", data[i].usn);
        printf("\t \n The marks are as follows \n");

        for (j = 0; j < 3; j++)
        {
            printf("Marks in Subject %d \n", j + 1);
            printf("%d \n", data[i].marks[j]);
        }
    }

    printf("\n\n");
    printf("Enter the roll number to be searched\n");

    int roll;
    scanf("%d", &roll);

    for (i = 0; i < n; i++)
    {
        if (data[i].usn == roll)
        {
            printf("Student %d is\n", i + 1);
            printf("%s \n", data[i].name);
            printf("USN of Student %d is\n", i + 1);
            printf("%d \n", data[i].usn);
            printf("\t \n The marks are as follows \n");

            for (j = 0; j < 3; j++)
            {
                printf("Marks in Subject %d \n", j + 1);
                printf("%d \n", data[i].marks[j]);
            }

            return 0;
        }
    }

    printf("No record found\n");
}
