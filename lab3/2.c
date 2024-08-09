// 2. WAP to find fibonacci series using recursion
#include <stdio.h>
int fib(int n)
{
    if (n <= 0)
    {
        return n;
    }
    if(n==1)

    {
        return 1;
    }
  
        return fib(n-1)+fib(n-2);
}
int main()
{
    int n;
    
    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);
    
    if (n < 0)
    {
        printf("Number of terms should be non-negative.\n");
        return 0;
    }
    
    printf("The series is:");
    
    for (int i = 0; i < n; i++)
    {
        printf(" %d", fib(i));
    }
    
    printf("\n");

    return 0;
}