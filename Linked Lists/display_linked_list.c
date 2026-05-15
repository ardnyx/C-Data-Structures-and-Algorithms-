#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data; // This creates the place to put values
  struct Node *next; // This creates the place to address pointing to next nodes
} *first_node = NULL; // *first_node is a pointer to a Node, currently pointing nowehere

void CreateLinkedList(int A[], int n) {
    int i;
    struct Node *t, *last; // *t is a helper pointer, *last is pointing to last node
    first_node = (struct Node *)malloc(sizeof(struct Node)); 
    first_node->data = A[0];
    first_node->next = NULL;
    last=first_node;

    for (i = 1; i < n; i++) {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void RecursiveDisplay(struct Node *node) {
    if (node != NULL) {
        printf("%d", node->data);
        if (node->next != NULL) {
            printf(" -> ");
        }
        RecursiveDisplay(node->next);
    }
}

void Reverse_RecursiveDisplay(struct Node *node) {
    if (node != NULL) {
        Reverse_RecursiveDisplay(node->next);
        if (node->next != NULL) {
            printf(" -> ");
        }
        printf("%d", node->data);
    }
}

void NormalDisplay() {
    struct Node *node = first_node;
    while (node != NULL) {
        printf("%d", node->data);
        if (node->next != NULL) {
            printf(" -> ");
        }
        node = node->next;
    }
    return;
}

int Count(struct Node *node) {
    int count = 0;
    while (node != NULL) {
        count++;
        node = node->next;
    }
    return count;
}

int RecursiveCount(struct Node *node) {
    if (node == 0){
        return 0;
    }
    else {
        return RecursiveCount(node->next) + 1; // 1 + RecursiveCount(node->next) does not 
                                               // work because what would happen is 
                                               // 1 + 0x<memory> (invalid)
    }
}

int Sum(struct Node *node) {    
    int result = 0;
    while (node != NULL) {
        result += node->data;
        node = node->next;
    }
    return result;
}

int RecursiveSum(struct Node *node) {
    if (node != NULL) {
        return RecursiveSum(node->next) + node->data;
    }
    else {
        return 0;
    }
}
int main() {
    int A[] = {1,2,3,4,5};
    CreateLinkedList(A, sizeof(A) / sizeof(int));

    printf("Recursive Display: ");
    RecursiveDisplay(first_node);
    printf("\n");

    printf("Normal Display: ");
    NormalDisplay();
    printf("\n");

    printf("Reversed Recursive Display: ");
    Reverse_RecursiveDisplay(first_node);

    int count_result = Count(first_node);
    int sum_result = Sum(first_node);  

    int r_count_result = RecursiveCount(first_node);
    int r_sum_result = RecursiveSum(first_node);
    return 0;
}