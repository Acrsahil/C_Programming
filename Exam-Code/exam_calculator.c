#include <stdio.h>

int main()
{
    int a, b;
    char op;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the operator (+,-,*,/): ");
    scanf(" %c", &op);

    printf("Enter the value of b: ");
    scanf("%d", &b);
    // getchar();

    switch (op)
    {
    case '+':
        printf("%d + %d = %d\n", a, b, a + b);
        break;

    case '-':
        printf("%d - %d = %d\n", a, b, a - b);
        break;

    case '*':
        printf("%d * %d = %d\n", a, b, a * b);
        break;

    case '/':
        printf("%d / %d = %d\n", a, b, a / b);
        break;

    default:
        printf("!Invalid Operator\n");
        break;
    }

    return 0;
}