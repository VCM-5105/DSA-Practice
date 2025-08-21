#include <iostream>
#include <vector>

int findMissingNumber(const std::vector<int>& arr) {
    int left = 0;
    int right = arr.size() - 1;
    int n = arr.size();

    while (left <= right) {
        int mid = left + (right - left) / 2;
        int expectedValue = arr[0] + mid * (arr[1] - arr[0]);

        if (arr[mid] == expectedValue) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return arr[0] + left * (arr[1] - arr[0]);
}

int main() {
    std::vector<int> arr = {1, 3, 7, 9, 11};
    int missingNumber = findMissingNumber(arr);
    std::cout << "Missing number: " << missingNumber << std::endl;
    return 0;
}