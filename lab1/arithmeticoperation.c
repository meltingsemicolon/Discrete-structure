// WAP that takes user input to choose the type of arithmetic operations and two numbers &then printout the result.

#include <stdio.h>
#include <string.h>
int sum()
{
    int a, b, c;
    printf("Enter two numbers: \n");
    scanf("%d%d", &a, &b);
    c = a + b;
    return c;
}
int diff()
{
    int a, b, c;
    printf("Enter two numbers: \n");
    scanf("%d%d", &a, &b);
    c = a - b;
    return c;
}
int mult()
{
    int a, b, c;
    printf("Enter two numbers: \n");
    scanf("%d%d", &a, &b);
    c = a * b;
    return c;
}
double divi()
{
    double a, b, c;
    printf("Enter two numbers: \n");
    scanf("%lf%lf", &a, &b);
    c = a / b;
    return c;
}

int main()
{
    char z;
    printf("Enter the arithmetic operation\n + for addition\n - for difference \n * for multiplication\n / for division\n");
    scanf(" %c", &z);
    if (z == '+')
    {

        printf("The sum is %d", sum());
    }
    else if (z == '-')
    {

        printf("The differernce is %d", diff());
    }
    else if (z == '*')
    {

        printf("The product is %d", mult());
    }
    else if (z == '/')
    {

        printf("The divison is %f", divi());
    }
    else
    {
        printf("Invalid operator choosen : ");
    }
    return 0;
}
// switch case
/*#include <stdio.h>

int main()
{
    char operator;
    int num1, num2, result;

    printf("Enter the arithmetic operation: ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    switch(operator)
    {
        case '+':
            result = num1 + num2;
            printf("The sum is %d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("The difference is %d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("The product is %d\n", result);
            break;
        case '/':
            if (num2 != 0)
            {
                float division = (float) num1 / num2;
                printf("The division is %.2f\n", division);
            }
            else
            {
                printf("Error:\n");
            }
            break;
        default:
            printf("Invalid operator chosen.\n");
            break;
    }

    return 0;
}
*/