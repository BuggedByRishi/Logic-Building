#include<stdio.h>

float Percentage(int imarks, int itotal)
{
    auto float ans = 0.0f;

    if(imarks == 0 || itotal == 0)
    {
        printf("Invalid Input\n");
        return ans;
    }
   if(imarks > itotal)
    {
        printf("Marks cannot be greater than Total Marks\n");
        return ans;
    }

    ans = (((float)imarks / (float)itotal) * 100);
    return ans; 
}

int main()
{
    auto int iValue = 0;
    auto int iTotal = 0;
    auto float iret = 0.0f;

    printf("Enter the Achieved Marks : ");
    scanf("%d",&iValue);

    printf("Enter the Total Marks : ");
    scanf("%d",&iTotal);

    iret = Percentage(iValue, iTotal);

    printf("Your Percentage is : %f\n",iret);

    return 0;
}