/* 3.2.3 Deleting a Node */

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* deleteNode(struct Node* head, int position) {
    if (head == NULL) {
        return NULL;
    }

    struct Node* temp = head;

    if (position == 0) {
        head = temp->next;
        free(temp);
        return head;
    }

    for (int i = 0; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        return head;
    }

    struct Node* nodeToDelete = temp->next;
    temp->next = temp->next->next;

    free(nodeToDelete);

    return head;
}

struct Node* insertNodeAtEnd(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        return newNode;
    }

    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;

    return head;
}

void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);

    struct Node* head = NULL;

    for (int i = 0; i < n; i++) {
        int data;
        scanf("%d", &data);
        head = insertNodeAtEnd(head, data);
    }

    int position;
    scanf("%d", &position);

    head = deleteNode(head, position);

    printList(head);

    return 0;
}