#include <stdio.h>

void main()
{
    char op;
    int in1, in2, result;

    scanf("%d %c %d", &in1, &op, &in2);

    switch (op)
    {
    case '+':
        result = in1 + in2;
        break;

    case '-':
        result = in1 - in2;
        break;

    case '*':
        result = in1 * in2;
        break;
    case '/':
        result = in1 / in2;
        break;
    default:
        break;
    }

    printf("%d %c %2d =%d", in1, op, in2, result);
}