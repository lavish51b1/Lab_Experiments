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

    if (head == NULL) {
        head = n;
        n->next = head;
        return;
    }

    struct node *t = head;
    while (t->next != head) t = t->next;
    t->next = n;
    n->next = head;
}

void display() {
    if (head == NULL) return;
    struct node *t = head;
    do {
        printf("%d -> ", t->data);
        t = t->next;
    } while (t != head);
    printf("HEAD\n");
}

int main() {
    insert(1);
    insert(2);
    insert(3);
    display();
}
