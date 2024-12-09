#include <iostream>
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

// In every 2x3 block, there are 2 ways for 2 knights to attack each other:
//    x . .     . . x
//    . . x     x . .  

// In every 3x2 block, there are 2 ways for 2 knights to attack each other
//    x .     . x
//    . .     . .
//    . x     x .

// For a KxK square:
//  - There are (K-1) ways to stack 2x3 blocks in rows
//  - There are (K-2) ways to stack 2x3 blocks in columns
//  - There are (K-1) ways to stack 3x2 blocks in columns
//  - There are (K-2) ways to stack 3x2 blocks in rows

// So in total, there are (K-1)(K-2)+(K-1)(K-2) ways to arrange 2x3 and 3x2 blocks
// We need to then multiply these by 2 bc each block contains 2 attacking configurations
// So the total attacking configurations is: 4(K-1)(K-2)

// In total there are K^2 places to place the first knight and K^2 - 1 places to place the 2nd knight
// Need to divide by 2 since we are counting each configuration twice for a total of (K^2)(K^2-1) / 2

int main() {

    long long k;
    cin >> k;

    for (long long i = 1; i <= k; i++)
    {
        long long totalPositions;
        long long attackingPositions;

        totalPositions = ((i*i)*(i*i-1)) / 2;
        attackingPositions = 4 * (i-1) * (i-2);
        cout << totalPositions - attackingPositions << endl;
    }


}
