#include <stdio.h>
float Calculator(int a, int b, int n)
{
    int result;
    switch (n)
    {

    case 1:
        result = a + b;
        break;
    case 2:
        result = a - b;
        break;
    case 3:
        result = a * b;
        break;
    case 4:
        result = a / b;
        break;
    case 5:
        result = a % b;
        break;
    case 6:
        return 0;
    default:
        printf("Invalid choice\n");
        return -1;
    }
    return result;
}

int main()
{
    int a, b, n, result;
    
    do
    {
        printf("Enter your choice : \nPress 1 for +\nPress 2 for -\nPress 3 for *\nPress 4 for /\nPress 5 for %%\nPress 6 to exit\n");
        scanf("%d", &n);

        if (n == 6)
            break;

        printf("Enter the first number: ");
        scanf("%d", &a);
        printf("Enter the second number: ");
        scanf("%d", &b);

        result = Calculator(a, b, n);

        if (result != -1)
        {
            switch (n)
            {
            case 1:
                printf("Addition of %d and %d = %d\n", a, b, result);
                break;
            case 2:
                printf("Subtraction of %d and %d = %d\n", a, b, result);
                break;
            case 3:
                printf("Multiplication of %d and %d = %d\n", a, b, result);
                break;
            case 4:
                printf("Division of %d and %d = %d\n", a, b, result);
                break;
            case 5:
                printf("Modulo of %d and %d = %d\n", a, b, result);
                break;
            }
        }

    } while (n != 6);
    printf("Thank you for using Calculator");
    return 0;
}
