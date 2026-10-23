#include <stdio.h>

void reverse(int *tab, int n) {
    int *p1 = tab, *p2 = tab + n - 1, temp;

    while (p1 < p2) {
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;

        p1++;
        p2--;
    }
}

int main() {
    int n, *p1, *p2, tab[100];

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid array size.\n");
        return 1;
    }

    for (p1 = tab; p1 < tab + n; p1++) {
        printf("Enter a value: ");
        scanf("%d", p1);
    }

    printf("Original array:\n");
    for (p1 = tab; p1 < tab + n; p1++) {
        printf("%d ", *p1);
    }

    reverse(tab, n);

    printf("\nReversed array:\n");
    for (p2 = tab; p2 < tab + n; p2++) {
        printf("%d ", *p2);
    }

    return 0;
}