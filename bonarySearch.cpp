#include <iostream>
#include <vector>
#include <algorithm> // For sort (optional if input is already sorted)

using namespace std;

// Function to perform binary search
// Returns the index of the target if found, otherwise returns -1
int binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Avoid potential overflow with (left + right) / 2

        // Check if target is present at mid
        if (arr[mid] == target) {
            return mid;
        }

        // If target is greater, ignore left half
        if (arr[mid] < target) {
            left = mid + 1;
        }
        // If target is smaller, ignore right half
        else {
            right = mid - 1;
        }
    }

    // Target was not found
    return -1;
}

int main() {
    // Example 1: User input
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " integers (sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Ensure the array is sorted (Binary Search requires sorted array)
    // sort(arr.begin(), arr.end()); 

    int target;
    cout << "Enter number to search: ";
    cin >> target;

    int result = binarySearch(arr, target);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
