#include<stdio.h>
#include<stdlib.h>

void CalculateBonus(float fSalary , int iYears)
{
    float fBonus = 0.0f;

    if(iYears > 10)
    {
        fBonus = (0.15*fSalary);
        printf("Bonus = %f ",fBonus);
        
    }
    else if(iYears <= 10 && iYears>= 5)
    {
        fBonus = (0.10*fSalary);
        printf("Bonus = %f ",fBonus);
    }
    else if(iYears < 5 && iYears >= 0)
    {
        fBonus = (0.05*fSalary);
        printf("Bonus = %f ",fBonus);
    }
    else
    {
        printf("Invalid Details");
    }
    
}

int main()
{
    float fSalary = 0.0f;

    int iYears = 0;

    printf("Enter Salary and Years Of Service\n");
    scanf("%f %d",&fSalary,&iYears);

    CalculateBonus(fSalary,iYears);

    return EXIT_SUCCESS;
}