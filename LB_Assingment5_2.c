#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{
    if((iYear % 100 != 0 , iYear % 4 == 0) || (iYear % 400 ==0)) 
    {
        printf("Leap Year");
    }
    else if( iYear <= 0)
    {
        printf("Invalid Year");
    }
    else
    {
        printf("Not A Leap Year");
    }
}

int main()
{
    int iYear=0;

    printf("Enter Year:\n");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}