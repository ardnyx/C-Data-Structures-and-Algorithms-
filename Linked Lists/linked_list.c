#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next; // Self-referential structure
                     // a structure that contains at least one member 
                     // which is a pointer to an instance of the same structure type
};

#include <stdio.h>

int main() {
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));

    printf("%zu", sizeof(p));   
    return 0;
}