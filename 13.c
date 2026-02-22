#include<stdio.h>

int sumDigits(int ino)
{
    int counter = 0;
    int sum = 0;

    while(ino != 0)
    {
        sum = sum + (ino % 10);
        ino = ino / 10;
    }
    return sum;
}

int main()
{
    int ivalue = 0;
    int iret = 0;

    printf("Enter a number to make the sum of the digits : ");
    scanf("%d",&ivalue);

    iret = sumDigits(ivalue);

    printf("The sum of the digits are : %d",iret);

    return 0;
}