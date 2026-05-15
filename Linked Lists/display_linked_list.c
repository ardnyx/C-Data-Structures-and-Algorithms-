#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data; // This creates the place to put values
  struct Node *next; // This creates the place to address pointing to next nodes
} *first = NULL; // *first is a pointer to a Node, currently pointing nowehere

void CreateLinkedList(int A[], int n) {
    int i;
    struct Node *t, *last; // *t is a helper pointer, *last is pointing to last node
    first = (struct Node *)malloc(sizeof(struct Node)); 
    first->data = A[0];
    first->next = NULL;
    last=first;

    for (i = 1; i < n; i++) {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void RecursiveDisplay(struct Node *p) {
    if (p != NULL) {
        printf("%d", p->data);
        if (p->next != NULL) {
            printf(" -> ");
        }
        RecursiveDisplay(p->next);
    }
}

void Reverse_RecursiveDisplay(struct Node *p) {
    if (p != NULL) {
        Reverse_RecursiveDisplay(p->next);
        if (p->next != NULL) {
            printf(" -> ");
        }
        printf("%d", p->data);
    }
}

void NormalDisplay() {
    struct Node *p = first;
    while (p != NULL) {
        printf("%d", p->data);
        if (p->next != NULL) {
            printf(" -> ");
        }
        p = p->next;
    }
    return;
}

int main() {
    int A[] = {1,2,3,4,5};
    CreateLinkedList(A, sizeof(A) / sizeof(int));

    printf("Recursive Display: ");
    RecursiveDisplay(first);
    printf("\n");

    printf("Normal Display: ");
    NormalDisplay();
    printf("\n");

    printf("Reversed Recursive Display: ");
    Reverse_RecursiveDisplay(first);
    return 0;
}