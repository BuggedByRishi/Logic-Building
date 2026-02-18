#include<stdio.h>

void Displayclass(int imarks)
{
    if(imarks >= 75)
    {
        printf("First Class\n");
    }
    else if(imarks >= 60 && imarks < 70)
    {
        printf("Second Class\n");
    }
    else if(imarks >= 50 && imarks < 60)
    {
        printf("Third Class\n");
    }
    else
    {
        printf("Fail\n");
    }
}

int main()
{
    auto int ivalue = 0;
    float iret = 0.0f;

    printf("Enter the marks : ");
    scanf("%d",&ivalue);

    Displayclass(ivalue);

    return 0;
}