#include <iostream>

using namespace std;

void weird_algorithm(long long n) // Changed to long long to handle large numbers
{
    cout << n << " ";
    while (n != 1)
    {
        if (n%2 != 0) // Odd
        {
            n = (n*3) + 1;
        }
        else // Even
        {
            n /= 2;
        }

        cout << n << " ";
    }
}

int main() {
    long long input; // Changed to long long
    cin >> input;

    weird_algorithm(input);
}