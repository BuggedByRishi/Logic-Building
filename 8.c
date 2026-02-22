#include<stdio.h>

void DisplayFactors(int ino)
{
    int i = 0;

    printf("Factors of %d are: \n",ino);

    for(i = 1; i < ino; i++)
    {
        if((ino % i) == 0)
        {
            printf("%d\n",i);
        }
    }
}

int main()
{
    int ivalue = 0;

    printf("Enter a number : ");
    scanf("%d",&ivalue);

    DisplayFactors(ivalue);

    return 0;
}