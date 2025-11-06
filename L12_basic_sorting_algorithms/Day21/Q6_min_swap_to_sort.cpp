#include <iostream>
using namespace std;

// Function to count minimum swaps using brute force (selection sort logic)
int minSwapsToSort(int arr[], int n) {
    int swaps = 0;

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        // Find the index of the smallest element in remaining array
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }

        // If the current element is not the smallest, swap it
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
            swaps++;
        }
    }

    return swaps;
}

int main() {
    int arr[] = {2, 8, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Minimum swaps required: " << minSwapsToSort(arr, n) << endl;
    return 0;
}