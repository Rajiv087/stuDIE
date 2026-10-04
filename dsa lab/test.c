#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 50

char stack[SIZE];
int top = -1;

void push(char c) {
    top++;
    stack[top] = c;
}

char pop() {
    char c = stack[top];
    top--;
    return c;
}

char peek() {
    return stack[top];
}

int precedence(char c) {
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return 0;
}

int main() {
    char infix[SIZE], postfix[SIZE];
    int i = 0, j = 0;

    printf("Enter infix expression: ");
    scanf("%s", infix);

    while (infix[i] != '\0') {
        char c = infix[i];

        if (isalnum(c)) {
            postfix[j] = c;
            j++;
        }
        else if (c == '(') {
            push(c);
        }
        else if (c == ')') {
            while (top != -1 && peek() != '(') {
                postfix[j] = pop();
                j++;
            }
            pop(); 
        }
        else {
            while (top != -1 && precedence(peek()) >= precedence(c)) {
                postfix[j] = pop();
                j++;
            }
            push(c);
        }
        i++;
    }

    while (top != -1) {
        postfix[j] = pop();
        j++;
    }
    postfix[j] = '\0';

    printf("Postfix expression: %s\n", postfix);

    return 0;
}