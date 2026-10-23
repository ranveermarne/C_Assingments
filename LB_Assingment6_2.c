#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fMarks,int iAge)
{
    if((fMarks >= 60 && fMarks <= 100) && (iAge >= 17))
    {
        printf("Eligible for admission");
    }
    else
    {
        printf("Not Eligible");
    }


}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter Marks and Age:\n");
    scanf("%f %d",&fMarks , &iAge);

    CheckAdmission(fMarks , iAge);

    return EXIT_SUCCESS;
}