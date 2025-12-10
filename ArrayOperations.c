#include <stdio.h>

int main() {
    int n, pos, val, i, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Insertion
    printf("Enter position to insert: ");
    scanf("%d", &pos);
    printf("Enter value: ");
    scanf("%d", &val);

    for (i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = val;
    n++;

    // Deletion
    printf("Enter position to delete: ");
    scanf("%d", &pos);

    for (i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--;

    // Searching
    printf("Enter element to search: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Found at index %d\n", i);
            break;
        }
    }

    // Update
    printf("Enter index to update: ");
    scanf("%d", &pos);
    printf("Enter new value: ");
    scanf("%d", &val);
    arr[pos] = val;

    // Display
    printf("Final Array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
