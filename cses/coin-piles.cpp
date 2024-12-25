#include <iostream>
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

string checkPiles(long long left, long long right)
{
    if ((left+right) % 3 != 0)
    {
        return "NO";
    }
    if (left > 2*right || right > 2*left)
    {
        return "NO";
    }
    else
    {
        return "YES";
    }
}

int main() {

    int num_tests;
    cin >> num_tests;

    vector<int> left_pile;
    vector<int> right_pile;
    long long num1, num2;

    for (int i = 0; i < num_tests; i++)
    {
        cin >> num1 >> num2;
        left_pile.push_back(num1);
        right_pile.push_back(num2);
    }

    for (int i = 0; i < num_tests; i++)
    {
        cout << checkPiles(left_pile[i], right_pile[i]) << endl;
    }

}
