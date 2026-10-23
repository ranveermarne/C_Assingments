#include<stdio.h>
#include<stdlib.h>

void DisplayGrade(float fMarks)
{
    if(fMarks >=90 && fMarks<=100)
    {
        printf("Grade A");
    }
    else if(fMarks >= 75 && fMarks< 90)
    {
        printf("Grade B");
    }
    else if(fMarks >= 60 && fMarks < 75)
    {
        printf("Grade C");
    }
    else if(fMarks >= 40 && fMarks < 60)
    {
        printf("Grade D");
    }
    else if(fMarks < 40)
    {
        printf("FAIL");
    }
    else
    {
        printf("Invalid Marks");
    }
}

int main()
{
    float fMarks = 0;

    printf("Enter Marks\n");
    scanf("%f",&fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}