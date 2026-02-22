#include<stdio.h>
#include<stdbool.h>

bool checkPrime(int ino)
{
    int i = 0;

    for(i = 2; i < ino; i++)
    {
        if((ino % i) == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int ivalue = 0;
    bool bret = false;

    printf("Enter a number to check if Prime : ");
    scanf("%d",&ivalue);

    bret = checkPrime(ivalue);

    if(bret == true)
    {
        printf("This is a Prime Number");
    }
    else
    {
        printf("This is not a Prime Number");
    }

    return 0;
}
