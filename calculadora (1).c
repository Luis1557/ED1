#include <stdio.h>

// Declaração de funções
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double calculate(double a, double b, char operador);

int main() {
    double num1, num2;
    char operador;

    printf("Digite dois números: ");
    scanf("%lf %lf", &num1, &num2);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);

    printf("Resultado: %.2lf\n", calculate(num1, num2, operador));

    return 0;
}

// Implementação da função de adição
double add(double a, double b) {
    return a + b;
}

// Implementação da função de subtração
double subtract(double a, double b) {
    return a - b;
}

// Implementação da função de multiplicação
double multiply(double a, double b) {
    return a * b;
}

// Implementação da função de divisão
double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Erro: divisão por zero!\n");
        return 0.0; // Retorna zero se b é zero para evitar divisão por zero
    }
}

// Implementação da função calculate
double calculate(double a, double b, char operador) {
    switch (operador) {
        case '+':
            return add(a, b);
        case '-':
            return subtract(a, b);
        case '*':
            return multiply(a, b);
        case '/':
            return divide(a, b);
        default:
            printf("Erro: operador inválido!\n");
            return 0.0; // Retorna zero se o operador é inválido
    }
}