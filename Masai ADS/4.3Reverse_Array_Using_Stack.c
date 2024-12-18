/* 4.3Reverse Array Using Stack*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100000

int stack[MAX_SIZE];
int top = -1;

void push(int x) {
    if (top == MAX_SIZE - 1) {
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

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        push(arr[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", pop());
    }

    return 0;
}