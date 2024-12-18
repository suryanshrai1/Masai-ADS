/*4.2Reverse_stack_using_recursion*/
#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

int stack[MAX];
int top = -1;

void push(int x) {
    if (top == MAX - 1) {
        printf("Stack overflow\n");
        return;
    }
    stack[++top] = x;
}

int pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        return -1;
    }
    return stack[top--];
}

void insertAtBottom(int x) {
    if (top == -1) {
        push(x);
        return;
    }
    int temp = pop();
    insertAtBottom(x);
    push(temp);
}

void reverseStack() {
    if (top == -1) {
        return;
    }
    int temp = pop();
    reverseStack();
    insertAtBottom(temp);
}

void printStack() {
    for (int i = 0; i <= top; i++) {
        printf("%d\n", stack[i]);
    }
}

int main() {
    int x;
    while (1) {
        scanf("%d", &x);
        if (x == -1) break;
        push(x);
    }

    reverseStack();
    printStack();
    
    return 0;
}