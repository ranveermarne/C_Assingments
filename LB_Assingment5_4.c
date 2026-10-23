#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisibility(int iValue)
{
    if(iValue % 3 == 0 && iValue % 5 == 0)
    {
        printf("Divisible by both 3 And 5");
    }
    else if(iValue % 3 == 0)
    {
        printf("Divisible by 3");
    }
    else if(iValue % 5 == 0)
    {
        printf("Divisible by 5");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}