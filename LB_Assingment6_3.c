#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fFinalAmount = 0.0f;
    float fDiscount = 0.0f;

    if(fAmount < 1000)
    {
        printf("No Discount\n");
        
    }
    else if( fAmount >= 1000 && fAmount < 5000)
    {
        fDiscount=0.1;
        fFinalAmount = (fAmount * (1-fDiscount));
        printf("Payable Amount %f\n", fFinalAmount);
    }
    else if(fAmount >= 5000)
    {
        fDiscount = 0.2f;
        fFinalAmount = (fAmount * (1 - fDiscount));
        printf("Payable Amount %f\n", fFinalAmount);
    }



}

int main()
{
    float fAmount = 0.0f;

    printf("Enter Purchase Amount\n");
    scanf("%f",&fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}