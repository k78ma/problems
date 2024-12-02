#include <iostream>

using namespace std;

int main() {

    string input;
    cin >> input;

    long long inputLength = input.length();

    long long longestCount = 1; // Shortest possible answer is 1, not 0
    long long currentCount = 1;

    for (int i = 1; i < inputLength; i++)
    {
        if (input[i] == input[i-1])
        {
            currentCount++;
        }
        else
        {
            currentCount = 1; // Reset to 1
        }

        longestCount = max(longestCount, currentCount); // Keep track of longest
    }

    cout << longestCount;

}
