#include <iostream>
#include <stack>
#include <string>
#include <cmath>

bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
}

int precedence(char op) {
    if (op == '^')
        return 3;
    if (op == '*' || op == '/')
        return 2;
    if (op == '+' || op == '-')
        return 1;
    return 0;
}

double applyOperation(double a, double b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
        case '^': return std::pow(a, b);
        default: return 0.0;
    }
}

double evaluateExpression(const std::string& expression) {
    std::stack<double> operands;
    std::stack<char> operators;

    for (char c : expression) {
        if (c == ' ')
            continue;
        else if (isdigit(c)) {
            operands.push(c - '0');
        } else if (c == '(') {
            operators.push(c);
        } else if (c == ')') {
            while (!operators.empty() && operators.top() != '(') {
                char op = operators.top();
                operators.pop();

                double b = operands.top();
                operands.pop();
                double a = operands.top();
                operands.pop();

                operands.push(applyOperation(a, b, op));
            }
            operators.pop(); // Discard '('
        } else if (isOperator(c)) {
            while (!operators.empty() && precedence(operators.top()) >= precedence(c)) {
                char op = operators.top();
                operators.pop();

                double b = operands.top();
                operands.pop();
                double a = operands.top();
                operands.pop();

                operands.push(applyOperation(a, b, op));
            }
            operators.push(c);
        }
    }

    while (!operators.empty()) {
        char op = operators.top();
        operators.pop();

        double b = operands.top();
        operands.pop();
        double a = operands.top();
        operands.pop();

        operands.push(applyOperation(a, b, op));
    }

    return operands.top();
}

int main() {
    std::string expression;
    std::cout << "Enter a mathematical expression: ";
    std::getline(std::cin, expression);
    double result = evaluateExpression(expression);
    std::cout << "Result: " << result << std::endl;
    return 0;
}

