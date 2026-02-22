// Reversed Integer

#include<stdio.h>

int reversedInteger(int ino)
{
   int idigit = 0;

   while(ino != 0)
   {
    idigit = ino % 10;
    printf("%d",idigit);
    ino = ino / 10;
   }
}

int main()
{
    int ivalue = 0;

    printf("Enter a number for Integer Reversal");
    scanf("%d",&ivalue);

    reversedInteger(ivalue);

    return 0;
}