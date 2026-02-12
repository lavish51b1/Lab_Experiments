#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert_begin(int val) {
    struct node *n = malloc(sizeof(struct node));
    n->data = val;
    n->next = head;
    head = n;
}

void insert_end(int val) {
    struct node *n = malloc(sizeof(struct node));
    n->data = val;
    n->next = NULL;

    if (head == NULL) {
        head = n;
        return;
    }
    struct node *t = head;
    while (t->next != NULL) t = t->next;
    t->next = n;
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
    insert_begin(10);
    insert_end(20);
    insert_end(30);
    display();
}

