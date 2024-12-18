/* 3.2.2 Middle Node */ 
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* findMiddle(struct Node* head) {
    struct Node* slow = head;
    struct Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
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

int main() {
    int t;
    scanf("%d", &t);

    struct Node* head = NULL;

    for (int i = 0; i < t; i++) {
        int data;
        scanf("%d", &data);
        head = insertNodeAtEnd(head, data);
    }

    struct Node* middleNode = findMiddle(head);
    printf("%d\n", middleNode->data);

    return 0;
}