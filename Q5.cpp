#include <iostream>
using namespace std;
// find the missing element in the given array

int findMissingElement(int arr[], int n) {
    int start = arr[0];                   // Starting number of the range
    int end = arr[n - 1];                 // Ending number of the range

    int expectedSum = ((end - start + 1) * (end + start)) / 2;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int missingElement = expectedSum - sum;
    return missingElement;
}

int main() {
    int array[] = {0,2,3};  
    int size = sizeof(array) / sizeof(array[0]);

    int missingElement = findMissingElement(array, size);
    cout << "The missing element in the range [" << array[0] << ", " << array[size - 1] << "] is: " << missingElement <<endl;

    return 0;
}
