#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

// Function to implement the alternative algorithm
void alternativeF(int arr[], int n) {
    int temp;

    // Sorting the array in descending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Printing the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
}

int main() {
    int arr[] = {5, 3, 8, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    cout << "Sorted Array:" << endl;
    alternativeF(arr, n);

    return 0;
}
