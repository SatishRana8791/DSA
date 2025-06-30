#include <iostream>
#include <vector>
#include <algorithm>  // For reverse
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};  // Example array
    int d = 2;  // Number of positions to rotate
    int n = arr.size();
    
    // Handle cases where d >= n
    d = d % n;

    // Step 1: Reverse the first 'd' elements
    reverse(arr.begin(), arr.begin() + d);

    // Step 2: Reverse the remaining 'n-d' elements
    reverse(arr.begin() + d, arr.end());

    // Step 3: Reverse the entire array
    reverse(arr.begin(), arr.end());

    // Print the rotated array exactly once
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
