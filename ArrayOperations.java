import java.util.*;

public class ArrayOperations {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number of elements: ");
        int n = sc.nextInt();

        int[] arr = new int[n + 1];

        System.out.println("Enter elements:");
        for (int i = 0; i < n; i++)
            arr[i] = sc.nextInt();

        // Traversal
        System.out.println("Array:");
        for (int i = 0; i < n; i++)
            System.out.print(arr[i] + " ");

        // Insertion
        System.out.print("\nEnter position to insert: ");
        int pos = sc.nextInt();
        System.out.print("Enter value: ");
        int val = sc.nextInt();

        for (int i = n; i > pos; i--)
            arr[i] = arr[i - 1];

        arr[pos] = val;
        n++;

        // Deletion
        System.out.print("Enter position to delete: ");
        int dpos = sc.nextInt();

        for (int i = dpos; i < n - 1; i++)
            arr[i] = arr[i + 1];

        n--;

        // Search
        System.out.print("Enter element to search: ");
        int key = sc.nextInt();
        boolean found = false;
        for (int i = 0; i < n; i++) {
            if (arr[i] == key) {
                System.out.println("Found at index: " + i);
                found = true;
                break;
            }
        }
        if (!found) System.out.println("Element not found");

        // Update
        System.out.print("Enter index to update: ");
        int upos = sc.nextInt();
        System.out.print("Enter new value: ");
        arr[upos] = sc.nextInt();

        System.out.println("Final Array:");
        for (int i = 0; i < n; i++)
            System.out.print(arr[i] + " ");
    }
}
