#include<stdio.h>
#include<stdbool.h>

bool checkPerfect(int ino)
{
    int i = 0;
    int sum = 0;

    for(i = 1; i < ino; i++)
    {
        if((ino % i) == 0)
        {
            sum = sum + i;
        }
    }
    if(sum == ino)
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
    int ivalue = 0;
    bool bret = false;

    printf("Enter a number to check a perfect number : ");
    scanf("%d",&ivalue);

    bret = checkPerfect(ivalue);

    if(bret == true)
    {
        printf("This is a perfect number");
    }
    else
    {
        printf("This is not a perfect number");
    }

    return 0;
}