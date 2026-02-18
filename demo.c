#include<stdio.h>

float calculateArea(float fValue)
{
    auto const float PI = 3.14;
    auto float ans = 0.0f;

    ans = PI * fValue * fValue;

    return ans;
}

int main()
{
    auto float fArea = 0.0f;
    auto float fRadius = 0.0f;

    printf("Enter the Radius of the Circle : ");
    scanf("%f",&fRadius);

    fArea = calculateArea(fRadius);

    printf("Area of Circle is : %f\n",fArea);

    return 0;
}