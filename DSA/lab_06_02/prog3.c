#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert(int val) {
    struct node *n = malloc(sizeof(struct node));
    n->data = val;
    n->next = head;
    head = n;
}

void delete_node() {
    if (head == NULL) return;
    struct node *t = head;
    head = head->next;
    free(t);
}

void display() {
    struct node *t = head;
    while (t != NULL) {
        printf("%d -> ", t->data);
        t = t->next;
    }
    printf("NULL\n");
}

int main() {
    insert(1);
    insert(2);
    delete_node();
    display();
}

