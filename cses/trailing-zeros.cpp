#include <iostream>
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
    
    long long n;
    cin >> n;

    // Negative Number Edge Case
    if (n < 0) 
        return -1;

    // Initialize result
    int count = 0;

    // Keep dividing n by powers of
    // 5 and update count (5, 25, 125, etc)
    for (int i = 5; n / i >= 1; i *= 5)
        count += n / i;

    cout << count;
}
