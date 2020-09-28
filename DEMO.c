#include <stdio.h>
int main() {
    char operator;
    double first, second;
    printf("Enter an operator (+, -, *, TODO: /): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf", &first, &second);

    switch (operator) {
    case '+':
        printf("%.1lf + %.1lf = %.1lf\n", first, second, first + second);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf\n", first, second, first - second);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf\n", first, second, first * second);
        break;
    case '/':
        printf("TODO: Make the division case\n");
        break;
        // operator doesn't match any case constant
    default:
        printf("Error! operator is not correct");
    }

    return 0;
}

