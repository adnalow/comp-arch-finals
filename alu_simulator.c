#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function prototypes
typedef enum { ADD, SUB, AND, OR, NOT, INVALID } Operation;

Operation get_operation(const char *op_str);
void simulate_addition(int a, int b);
void simulate_subtraction(int a, int b);
void simulate_and(int a, int b);
void simulate_or(int a, int b);
void simulate_not(int a);

int main() {
    char op_str[10];
    int a, b;
    printf("ALU Simulator (Addition, Subtraction, AND, OR, NOT)\n");
    printf("Enter operation (add, sub, and, or, not): ");
    scanf("%9s", op_str);
    Operation op = get_operation(op_str);

    if (op == INVALID) {
        printf("Invalid operation.\n");
        return 1;
    }

    if (op == NOT) {
        printf("Enter operand: ");
        scanf("%d", &a);
        simulate_not(a);
    } else {
        printf("Enter first operand: ");
        scanf("%d", &a);
        printf("Enter second operand: ");
        scanf("%d", &b);
        switch (op) {
            case ADD:
                simulate_addition(a, b);
                break;
            case SUB:
                simulate_subtraction(a, b);
                break;
            case AND:
                simulate_and(a, b);
                break;
            case OR:
                simulate_or(a, b);
                break;
            default:
                break;
        }
    }
    return 0;
}

Operation get_operation(const char *op_str) {
    if (strcmp(op_str, "add") == 0) return ADD;
    if (strcmp(op_str, "sub") == 0) return SUB;
    if (strcmp(op_str, "and") == 0) return AND;
    if (strcmp(op_str, "or") == 0) return OR;
    if (strcmp(op_str, "not") == 0) return NOT;
    return INVALID;
}

void simulate_addition(int a, int b) {
    printf("\n[Addition] Step-by-step:\n");
    printf("Step 1: Operand A = %d (binary: %08X)\n", a, a);
    printf("Step 2: Operand B = %d (binary: %08X)\n", b, b);
    int result = a + b;
    printf("Step 3: Add A and B: %d + %d = %d\n", a, b, result);
    printf("Step 4: Result in binary: %08X\n", result);
    printf("Result: %d\n", result);
}

void simulate_subtraction(int a, int b) {
    printf("\n[Subtraction] Step-by-step:\n");
    printf("Step 1: Operand A = %d (binary: %08X)\n", a, a);
    printf("Step 2: Operand B = %d (binary: %08X)\n", b, b);
    int result = a - b;
    printf("Step 3: Subtract B from A: %d - %d = %d\n", a, b, result);
    printf("Step 4: Result in binary: %08X\n", result);
    printf("Result: %d\n", result);
}

void simulate_and(int a, int b) {
    printf("\n[AND] Step-by-step:\n");
    printf("Step 1: Operand A = %d (binary: %08X)\n", a, a);
    printf("Step 2: Operand B = %d (binary: %08X)\n", b, b);
    int result = a & b;
    printf("Step 3: A AND B: %d & %d = %d (binary: %08X)\n", a, b, result, result);
    printf("Result: %d\n", result);
}

void simulate_or(int a, int b) {
    printf("\n[OR] Step-by-step:\n");
    printf("Step 1: Operand A = %d (binary: %08X)\n", a, a);
    printf("Step 2: Operand B = %d (binary: %08X)\n", b, b);
    int result = a | b;
    printf("Step 3: A OR B: %d | %d = %d (binary: %08X)\n", a, b, result, result);
    printf("Result: %d\n", result);
}

void simulate_not(int a) {
    printf("\n[NOT] Step-by-step:\n");
    printf("Step 1: Operand = %d (binary: %08X)\n", a, a);
    int result = ~a;
    printf("Step 2: NOT Operand: ~%d = %d (binary: %08X)\n", a, result, result);
    printf("Result: %d\n", result);
}
