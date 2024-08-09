// 1. WAP to find factorial of a number using recursion
#include <stdio.h>
#include <limits.h>
int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    // Check if the input is within the limit
    if (n > INT_MAX)
    {
        printf("Input exceeds the maximum value.\n");
        return 1;
    }
        printf("the factorial is: %d", fact(n));
    
    return 0;
}