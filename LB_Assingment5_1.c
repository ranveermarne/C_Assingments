#include<stdio.h>
#include<stdlib.h>

void FindGreatest(int iFirst , int iSecond, int iThird)
{
    if(iFirst > iSecond && iFirst > iThird)
    {
        printf("%d is the greater",iFirst);
    }
    else if( iSecond > iFirst && iSecond > iThird)
    {
        printf("%d is the greater",iSecond);
    }
    else
    {
        printf("%d is the greater",iThird);
    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0 , iValue3=0;

    printf("Enter first Number:\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number:\n");
    scanf("%d",&iValue2);

    printf("Enter Third Number:\n");
    scanf("%d",&iValue3);

    FindGreatest(iValue1 , iValue2, iValue3);

    return EXIT_SUCCESS;
}