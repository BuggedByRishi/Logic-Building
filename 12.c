#include<stdio.h>

int countDigits(int ino)
{
    int idigits = 0;
    int counter = 0;

    while(ino != 0)
    {
        idigits = ino % 10;
        ino = ino / 10;
        counter++;
    }
    return counter;
}

int main()
{
    int ivalue = 0;
    int iret = 0;
    
    printf("Enter a number to check the digits : ");
    scanf("%d",&ivalue);

    iret = countDigits(ivalue);

    printf("The number of digits are : %d",iret);

    return 0;
}