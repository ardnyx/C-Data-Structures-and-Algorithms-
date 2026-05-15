#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data; // This creates the place to put values
  struct Node *next; // This creates the place to address pointing to next nodes
} *first_node = NULL; // *first_node is a pointer to a Node, currently pointing nowehere

void create_linked_list(int A[], int n) {
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

void recursive_display(struct Node *node) {
    if (node != NULL) {
        printf("%d", node->data);
        if (node->next != NULL) {
            printf(" -> ");
        }
        recursive_display(node->next);
    }
}

void reverse_recursive_display(struct Node *node) {
    if (node != NULL) {
        reverse_recursive_display(node->next);
        if (node->next != NULL) {
            printf(" -> ");
        }
        printf("%d", node->data);
    }
}

void normal_display() {
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

int recursive_count(struct Node *node) {
    if (node == 0){
        return 0;
    }
    else {
        return recursive_count(node->next) + 1; // 1 + recursive_count(node->next) does not 
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

int recursive_sum(struct Node *node) {
    if (node != NULL) {
        return recursive_sum(node->next) + node->data;
    }
    else {
        return 0;
    }
}

int max_value(struct Node *node) {
    int max = 0;
    while (node) {
        if (max < node->data) {
            max = node->data;
        }
        node = node->next;
    }
    return max;
}

int recursive_max_value(struct Node *node) {
    int temp = 0;
    if (node == 0)
        return 0;
    temp = recursive_max_value(node->next);

    if (temp > node->data)
        return temp;
    else return node->data;
}


int main() {
    int A[] = {2,5,9,4,2,9};
    create_linked_list(A, sizeof(A) / sizeof(int));

    printf("Recursive Display: ");
    recursive_display(first_node);
    printf("\n");

    printf("Normal Display: ");
    normal_display();
    printf("\n");

    printf("Reversed Recursive Display: ");
    reverse_recursive_display(first_node);

    int count_result = Count(first_node);
    int sum_result = Sum(first_node);  

    int r_count_result = recursive_count(first_node);
    int r_sum_result = recursive_sum(first_node);

    int maximum_value = max_value(first_node);
    int r_maximum_value = recursive_max_value(first_node);
    return 0;
}