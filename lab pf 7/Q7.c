#include <stdio.h>

int find_duplicate(int arr[], int size) {
    int seen[size];
    for (int i = 0; i < size; i++) {
        seen[i] = 0; // Initialize all elements in seen array to 0
    }

    for (int i = 0; i < size; i++) {
        if (seen[arr[i]] == 1) {  // Check if the element has already been seen
            return arr[i];        // Return the first duplicate found
        }
        seen[arr[i]] = 1;         // Mark the element as seen
    }
    return -1;                    // If no duplicates are found
}

int main() {
    int arr[] = {1, 2, 3, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int duplicate = find_duplicate(arr, size);

    if (duplicate != -1) {
        printf("Number %d occurs more than once.\n", duplicate);
    } else {
        printf("No duplicates found.\n");
    }

    return 0;
}
