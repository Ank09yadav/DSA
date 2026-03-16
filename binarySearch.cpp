#include <iostream>
#include <vector>
#include <algorithm>

int binarySearch(const std::vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid; 
        }
        
        if (arr[mid] < target) {
            low = mid + 1; 
        } else {
            high = mid - 1; 
        }
    }

    return -1; 
}

int main() {
    std::vector<int> data = {12, 25, 33, 47, 50, 61, 75, 88, 99};
    int target;

    std::cout << "Enter the number to search for: ";
    std::cin >> target;

    int result = binarySearch(data, target);

    if (result != -1) {
        std::cout << "Element found at index: " << result << std::endl;
    } else {
        std::cout << "Element not found in the array." << std::endl;
    }

    return 0;
}