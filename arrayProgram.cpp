#include <iostream>
using namespace std;

const int MAX = 100;

// Function prototypes
void insertElement(int arr[], int &size, int pos, int value);
void deleteElement(int arr[], int &size, int pos);
int searchElement(int arr[], int size, int value);
void printOdd(int arr[], int size);
void printEven(int arr[], int size);

// Insert at position
void insertElement(int arr[], int &size, int pos, int value) {
    if (size >= MAX) {
        cout << "Array full, cannot insert.\n";
        return;
    }

    if (pos < 0 || pos > size) {
        cout << "Invalid position.\n";
        return;
    }

    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;
    size++;
}

// Delete from position
void deleteElement(int arr[], int &size, int pos) {
    if (pos < 0 || pos >= size) {
        cout << "Invalid position.\n";
        return;
    }

    for (int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--;
}

// Search element
int searchElement(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}

// Print odd numbers
void printOdd(int arr[], int size) {
    cout << "Odd numbers: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

// Print even numbers
void printEven(int arr[], int size) {
    cout << "Even numbers: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[MAX];
    int size;

    cout << "Enter child array size (max 100): ";
    cin >> size;

    if (size > MAX || size < 0) {
        cout << "Invalid size!\n";
        return 0;
    }

    // Input array
    cout << "Enter array elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Print initial array
    cout << "Initial array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Insert operation
    int pos, value;
    cout << "Insert - Enter position and value: ";
    cin >> pos >> value;

    insertElement(arr, size, pos, value);

    cout << "After insertion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Delete operation
    cout << "Delete - Enter position: ";
    cin >> pos;

    deleteElement(arr, size, pos);

    cout << "After deletion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Search operation
    cout << "Search - Enter value: ";
    cin >> value;

    int index = searchElement(arr, size, value);
    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found.\n";

    // Odd and Even
    printOdd(arr, size);
    printEven(arr, size);

    return 0;
}