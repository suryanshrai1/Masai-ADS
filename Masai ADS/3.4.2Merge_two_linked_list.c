/* 3.4.2Merge_two_linked_list*/

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

struct Node* mergeSortedLists(struct Node* l1, struct Node* l2) {
    struct Node* dummy = newNode(0);
    struct Node* current = dummy;

    while (l1 != NULL && l2 != NULL) {
        if (l1->data <= l2->data) {
            current->next = l1;
            l1 = l1->next;
        } else {
            current->next = l2;
            l2 = l2->next;
        }
        current = current->next;
    }

    if (l1 != NULL) {
        current->next = l1;
    } else {
        current->next = l2;
    }

    struct Node* mergedHead = dummy->next;
    free(dummy);
    return mergedHead;
}

void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

struct Node* insertNode(struct Node* head, int data) {
    struct Node* new_node = newNode(data);
    if (head == NULL) {
        return new_node;
    }
    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
    return head;
}

int main() {
    int n1, n2;
    scanf("%d", &n1);
    struct Node* l1 = NULL;
    for (int i = 0; i < n1; i++) {
        int data;
        scanf("%d", &data);
        l1 = insertNode(l1, data);
    }

    scanf("%d", &n2);
    struct Node* l2 = NULL;
    for (int i = 0; i < n2; i++) {
        int data;
        scanf("%d", &data);
        l2 = insertNode(l2, data);
    }

    struct Node* mergedHead = mergeSortedLists(l1, l2);

    printList(mergedHead);

    return 0;
}