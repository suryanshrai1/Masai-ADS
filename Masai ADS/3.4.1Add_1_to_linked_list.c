/* 3.4.1Add 1 to linked list*/
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* reverse(struct Node* head) {
    struct Node* prev = NULL;
    struct Node* curr = head;
    struct Node* next = NULL;
    
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    
    return prev;
}

struct Node* addOne(struct Node* head) {
    head = reverse(head);
    
    struct Node* current = head;
    int carry = 1;
    struct Node* prev = NULL;

    while (current != NULL) {
        int sum = current->data + carry;
        current->data = sum % 10;
        carry = sum / 10;

        prev = current;
        current = current->next;
    }

    if (carry) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = carry;
        newNode->next = NULL;
        prev->next = newNode;
    }
    
    head = reverse(head);

    return head;
}

void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

struct Node* insertNodeAtEnd(struct Node* head, int data, struct Node** lastNode) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        (*lastNode)->next = newNode;
    }
    
    *lastNode = newNode;

    return head;
}

int main() {
    int n;
    scanf("%d", &n);

    struct Node* head = NULL;
    struct Node* lastNode = NULL;

    for (int i = 0; i < n; i++) {
        int data;
        scanf("%d", &data);
        head = insertNodeAtEnd(head, data, &lastNode);
    }

    head = addOne(head);

    printList(head);

    return 0;
}