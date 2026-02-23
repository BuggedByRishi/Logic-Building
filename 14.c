#include<stdio.h>
#include<stdbool.h>

bool palindrome(int ino)
{
    int copy = ino;
    int irev = 0;
    int idigit = 0;

    while(ino != 0)
    {
        idigit = ino % 10;
        ino = ino / 10;
        irev = (irev * 10) + idigit;
    }

    if(irev == copy)
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

    printf("Enter a number to check if palindrome : ");
    scanf("%d",&ivalue);

    bret = palindrome(ivalue);

    if(bret == true)
    {
        printf("The number is a Palindrome");
    }
    else
    {
        printf("The number is not a Palindrome");   
    }

    return 0;
}
