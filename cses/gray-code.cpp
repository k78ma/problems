#include <iostream>
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <cmath>

using namespace std;

void decToBi(long long decimal)
{
    string result = "";

    while (decimal >= 1)
    {
        result += char(decimal % 2);
        decimal = floor(decimal / 2);
    }

    reverse(result.begin(), result.end());
    cout << result;
}


// n = 1
// 0
// 1

// n = 2
// 00
// 01
// 11
// 10

// n = 3
// 000 0
// 001 1
// 011 3
// 010 2
// 110 6
// 111 7
// 101 8


int main() {

    long long n;
    // cin >>  n;

    long long num_codes = pow(2, n);

    decToBi(2);
    
}
