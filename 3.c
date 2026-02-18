// Check if the number is Even or Odd

/*  1. Accept a number from User
    2. Divide the number by 2
    3. If the remainder = 0 then Even else Odd
*/

#include<stdio.h>
#include<stdbool.h>

bool EvenOdd(int ino)
{
    int ans = 0;

    if(ino % 2 == 0)
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
    bool bret = false;
    int ivalue = 0;

    printf("Enter the number : ");
    scanf("%d",&ivalue);

    bret = EvenOdd(ivalue);

    if(bret == true)
    {
        printf("%d is Even Number\n",ivalue);
    }
    else
    {
        printf("%d is Odd Number\n",ivalue);
    }

    return 0;
}