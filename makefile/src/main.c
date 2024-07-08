#include <stdio.h>
#include "calculator.h"

int main() {
    char op;
    double num1, num2;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    switch(op) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf\n", num1, num2, add(num1, num2));
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf\n", num1, num2, subtract(num1, num2));
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf\n", num1, num2, multiply(num1, num2));
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf\n", num1, num2, divide(num1, num2));
            break;
        default:
            printf("Error! Operator is not correct\n");
    }

    return 0;
}
