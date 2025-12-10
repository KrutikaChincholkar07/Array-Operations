#include <iostream>
using namespace std;

int main() {
    int n, pos, val, key;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Insertion
    cout << "Enter position to insert: ";
    cin >> pos;
    cout << "Enter value: ";
    cin >> val;

    for (int i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = val;
    n++;

    // Deletion
    cout << "Enter position to delete: ";
    cin >> pos;

    for (int i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--;

    // Searching
    cout << "Enter element to search: ";
    cin >> key;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Found at index " << i << endl;
            break;
        }
    }

    // Update
    cout << "Enter index to update: ";
    cin >> pos;
    cout << "Enter new value: ";
    cin >> val;
    arr[pos] = val;

    // Display
    cout << "Final Array:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
