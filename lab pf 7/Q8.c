#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char expression[100];
    int result = 0, temp = 0;
    char lastOperator = '+';
    
    // Input: Read the expression from the user
    printf("Enter an expression (only + and - operations): ");
    scanf("%s", expression);

    // Traverse the expression
    for (int i = 0; expression[i] != '\0'; i++) {
        if (isdigit(expression[i])) {
            temp = temp * 10 + (expression[i] - '0');  // Build multi-digit numbers
        } else if (expression[i] == '+' || expression[i] == '-') {
            // Perform the last operation before the current operator
            if (lastOperator == '+') {
                result += temp;
            } else if (lastOperator == '-') {
                result -= temp;
            }
            temp = 0;  // Reset temp for the next number
            lastOperator = expression[i];  // Update the last operator
        } else {
            // If there's an invalid character, the expression is invalid
            printf("Invalid expression\n");
            return 1;
        }
    }

    // Apply the last operation
    if (lastOperator == '+') {
        result += temp;
    } else if (lastOperator == '-') {
        result -= temp;
    }

    // Output the result
    printf("Result: %d\n", result);

    return 0;
}
