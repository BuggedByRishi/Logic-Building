// Calculating Cube using Functions

#include<stdio.h>

int calculateCube(int ino)
{
    int ans = 0;

    ans = ino * ino * ino;

    return ans;
}

int main()
{
    int iret = 0;
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iret = calculateCube(iValue);

    printf("The Cube of %d is : %d",iValue, iret);

    return 0;
}