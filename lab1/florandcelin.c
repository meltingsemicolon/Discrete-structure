//Wap to demonstrate an example of floor and celing functions.
#include <stdio.h>
#include <math.h>

int main()
{
    double num;
    printf("Enter a number: \n");
    scanf("%lf",&num);
    double celingresult = ceil(num);
    double floorresult = floor(num);
    printf("Ceiling result: %lf\n", celingresult);
    printf("Floor result: %lf\n", floorresult);
}