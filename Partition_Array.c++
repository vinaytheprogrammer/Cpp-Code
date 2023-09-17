#include <iostream>
#include <vector>

using namespace std;

bool canPartitionHelper(vector<int>& arr, int index, int sum1, int sum2) {
    if (index == arr.size()) {
        // If we've processed all elements in the array, check if both sums are equal.
        return sum1 == sum2;
    }

    // Include the current element in the first subset and recursively check.
    if (canPartitionHelper(arr, index + 1, sum1 + arr[index], sum2)) {
        return true;
    }

    // Include the current element in the second subset and recursively check.
    if (canPartitionHelper(arr, index + 1, sum1, sum2 + arr[index])) {
        return true;
    }

    return false;
}

bool canPartition(vector<int>& arr) {
    int totalSum = 0;
    for (int num : arr) {
        totalSum += num;
    }

    // If the total sum is odd, it cannot be partitioned into two equal-sum subsets.
    if (totalSum % 2 != 0) {
        return false;
    }

    return canPartitionHelper(arr, 0, 0, 0);
}

int main() {
    vector<int> arr = {1, 5, 11, 5};
    if (canPartition(arr)) {
        cout << "The array can be partitioned into two subsets with equal sums." << endl;
    } else {
        cout << "The array cannot be partitioned into two subsets with equal sums." << endl;
    }
    return 0;
}
