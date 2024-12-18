/* 4.1Again_a_classical_problem */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isBalanced(char* str) {
    int len = strlen(str);
    char stack[len];
    int top = -1;

    for (int i = 0; i < len; i++) {
        char current = str[i];

        if (current == '(' || current == '{' || current == '[') {
            stack[++top] = current;
        } else if (current == ')' || current == '}' || current == ']') {
            if (top == -1) {
                return 0;
            }
            char topChar = stack[top--];
            if ((current == ')' && topChar != '(') || 
                (current == '}' && topChar != '{') || 
                (current == ']' && topChar != '[')) {
                return 0;
            }
        }
    }

    return top == -1;
}

int main() {
    int t;
    scanf("%d", &t);
    getchar();

    while (t--) {
        char str[1001];
        fgets(str, 1001, stdin);
        str[strcspn(str, "\n")] = 0; 
        
        if (isBalanced(str)) {
            printf("balanced\n");
        } else {
            printf("not balanced\n");
        }
    }

    return 0;
}