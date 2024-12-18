/* 3.4.3Add_two_linked_list*/

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

struct Node* addTwoLists(struct Node* l1, struct Node* l2) {
    struct Node* dummy = newNode(0);
    struct Node* current = dummy;
    int carry = 0;

    while (l1 != NULL || l2 != NULL || carry != 0) {
        int sum = carry;

        if (l1 != NULL) {
            sum += l1->data;
            l1 = l1->next;
        }

        if (l2 != NULL) {
            sum += l2->data;
            l2 = l2->next;
        }

        carry = sum / 10;
        current->next = newNode(sum % 10);
        current = current->next;
    }

    struct Node* resultHead = dummy->next;
    free(dummy);
    return resultHead;
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
    int t1, t2;
    scanf("%d", &t1);
    struct Node* l1 = NULL;
    for (int i = 0; i < t1; i++) {
        int data;
        scanf("%d", &data);
        l1 = insertNode(l1, data);
    }

    scanf("%d", &t2);
    struct Node* l2 = NULL;
    for (int i = 0; i < t2; i++) {
        int data;
        scanf("%d", &data);
        l2 = insertNode(l2, data);
    }

    struct Node* result = addTwoLists(l1, l2);

    printList(result);

    return 0;
}