n = int(input("Enter number of elements: "))
arr = []

print("Enter elements:")
for _ in range(n):
    arr.append(int(input()))

print("Array:", arr)

# Insertion
pos = int(input("Enter position to insert: "))
val = int(input("Enter value to insert: "))
arr.insert(pos, val)
print("After Insertion:", arr)

# Deletion
pos = int(input("Enter position to delete: "))
arr.pop(pos)
print("After Deletion:", arr)

# Search
key = int(input("Enter element to search: "))
if key in arr:
    print("Element found at index:", arr.index(key))
else:
    print("Element not found")

# Update
pos = int(input("Enter index to update: "))
val = int(input("Enter new value: "))
arr[pos] = val
print("After Update:", arr)
