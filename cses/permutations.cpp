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

    long long midpoint;

    vector<int> odds;
    vector<int> evens;
    
    for (int i = 1; i <= n; i++)
    {
        if (i%2 == 0)
        {
            evens.push_back(i);
        }
        else
        {
            odds.push_back(i);
        }
    }

    if (n == 1)
    {
        cout << 1;
    }

    else if (n != 1 && (odds.size() == 1 || evens.size() == 1))
    {
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        for (int x : evens) {
            cout << x << " ";
        }
        for (int x : odds) {
            cout << x << " ";
        }
    }

}
