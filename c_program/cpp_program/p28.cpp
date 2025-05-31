#include <iostream>
int findMissingNumber(int arr[], int n) {
    int sum = (n * (n + 1)) / 2; 
    int actualSum = 0;
    for (int i = 0; i < n - 1; i++) {
        actualSum += arr[i];
    }
    return sum - actualSum;
}
int main() {
    int arr[] = {1, 2, 4, 5, 6}; 
    int n = 6; 
    int missingNumber = findMissingNumber(arr, n);
    std::cout << "The missing number is: " << missingNumber << std::endl;
    return 0;
}
