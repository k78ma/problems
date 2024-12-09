#include <iostream>
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {

    int n;
    cin >> n;

    long long exp = 1;

    for (int i = 1; i <= n; i++)
    {
        exp *= 2;
        exp = exp % 1000000007;
    }

    cout << exp;

}
