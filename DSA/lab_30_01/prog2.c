#include <stdio.h>

int main() {
    int n, i, pos, val, delPos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a1[100];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a1[i]);

    
    printf("Enter position to insert: ");
    scanf("%d", &pos);
    printf("Enter value: ");
    scanf("%d", &val);

    for(i = n; i >= pos; i--)
        a1[i] = a1[i - 1];

    a1[pos - 1] = val;
    n++;

    
    printf("Enter position to delete: ");
    scanf("%d", &delPos);

    for(i = delPos - 1; i < n - 1; i++)
        a1[i] = a1[i + 1];

    n--;

    printf("Final array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a1[i]);

    return 0;
}

