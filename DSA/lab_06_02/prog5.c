#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

void insert(int val) {
    struct node *n = malloc(sizeof(struct node));
    n->data = val;
    n->prev = NULL;
    n->next = head;

    if (head != NULL)
        head->prev = n;

    head = n;
}

void display() {
    struct node *t = head;
    while (t != NULL) {
        printf("%d <-> ", t->data);
        t = t->next;
    }
    printf("NULL\n");
}

int main() {
    insert(10);
    insert(20);
    insert(30);
    display();
}
