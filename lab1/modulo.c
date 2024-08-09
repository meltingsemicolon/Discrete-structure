// wap to find the modulu of a number.

#include <stdio.h>
int main ()
{
    int dividend, divisor, modulo;
    printf("Enter the dividend and divisor: ");
    scanf("%d%d",&dividend,&divisor);
    modulo= dividend% divisor;
    printf("The modulo is:%d ",modulo);
    return 0;
}