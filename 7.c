#include<stdio.h>
#include<stdbool.h>

bool Factor(int ino1, int ino2)
{
    if((ino1 % ino2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    bool iret = false;
    int num1 = 0;
    int num2 = 0;

    printf("Enter a number 1 : ");
    scanf("%d",&num1);

    printf("Enter a number 2 : ");
    scanf("%d",&num2);

    iret = Factor(num1, num2);

    if(iret == true)
    {
        printf("%d is a Factor of %d",num1, num2);
    }
    else
    {
        printf("%d is not a Factor of %d",num1, num2);
    }

    return 0;
}