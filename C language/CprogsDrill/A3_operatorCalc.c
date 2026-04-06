#include <stdio.h>

int main() {
    double num1, num2, result;
    char op;

    // Taking input from the user
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op); // Space before %c to ignore newline character
    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Using conditional statements to determine the operation
    if (op == '+') {
        result = num1 + num2;
        printf("Result: %.2lf\n", result);
    }
    else if (op == '-') {
        result = num1 - num2;
        printf("Result: %.2lf\n", result);
    }
    else if (op == '*') {
        result = num1 * num2;
        printf("Result: %.2lf\n", result);
    }
    else if (op == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            printf("Result: %.2lf\n", result);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    }
    else {
        printf("Error: Invalid operator!\n");
    }

    return 0;
}
