#include<stdio.h>

int Percentage(int imarks, int itotal)
{
    float ans = 0.0f;

    ans = (imarks / (float)itotal) * 100;

    return ans;
}

int main()
{
    float iret = 0.0f;
    int marks = 0;
    int Total = 0;

    printf("Enter the marks you received : ");
    scanf("%d",&marks);

    printf("Enter the total marks : ");
    scanf("%d",&Total);

    iret = Percentage(marks,Total);

    printf("Your Percentage is : %f\n",iret);

    return 0;
}