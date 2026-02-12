#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *top = NULL;

void push(int val) {
    struct node *n = malloc(sizeof(struct node));
    n->data = val;
    n->next = top;
    top = n;
}

void pop() {
    if (top == NULL) return;
    struct node *t = top;
    top = top->next;
    free(t);
}

void display() {
    struct node *t = top;
    while (t != NULL) {
        printf("%d\n", t->data);
        t = t->next;
    }
}

int main() {
    push(5);
    push(10);
    pop();
    display();
}

