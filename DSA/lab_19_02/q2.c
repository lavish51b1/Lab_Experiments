// Reverse a String using Stack

#include <stdio.h>
#include <string.h>
#define MAX 100

char stack[MAX];
int top = -1;

void push(char ch) {
    stack[++top] = ch;
}

char pop() {
    return stack[top--];
}

int main() {
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);

    int len = strlen(str);

    for (int i = 0; i < len; i++)
        push(str[i]);

    for (int i = 0; i < len; i++)
        str[i] = pop();

    printf("Reversed string: %s", str);

    return 0;
}
