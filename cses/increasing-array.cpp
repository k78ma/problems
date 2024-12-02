#include <iostream>

using namespace std;

int main() {

    long long n;
    cin >> n;

    long long nums[n];

    long long moves = 0;

    for (long long i = 0; i < n; i++) {  // Changed n-1 to n to read all numbers
        cin >> nums[i];
    }

    for (long long i = 1; i < n; i++) {  // Changed n-1 to n to check all numbers
        if (nums[i] < nums[i-1])
        {
            moves += (nums[i-1] - nums[i]);
            nums[i] = nums[i-1];  // Simplified assignment
        }
    }

    cout << moves;
    return 0;  // Added return statement

}
