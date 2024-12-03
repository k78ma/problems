#include <iostream>
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {

    int num_inputs;
    cin >> num_inputs;

    vector<int> ys;
    vector<int> xs;
    int num1, num2;


    for (int i = 0; i < num_inputs; i++)
    {
        cin >> num1 >> num2;
        ys.push_back(num1);
        xs.push_back(num2);
    }

    // Odd cols have their respective perfect square at (0, col)
        // 9 is at (0,3)
    // Even rows have their respective perfect square at (row, 0)
        // 16 is (4,0)


    // Find first larger perfect square
    for (int i = 0; i < num_inputs; i++)
    {
        long long y = ys[i];
        long long x = xs[i];
        long long ans;

        if (y > x)
        {
            if (y % 2 == 0)
            {
                ans = y * y - x + 1;
            }
            else
            {
                ans = (y-1) * (y-1) + x;
            }
        }
        else
        {
            if (x % 2 == 0)
            {
                ans = (x-1)*(x-1) + y;
            }
            else
            {
                ans = x*x - y + 1;
            }
        }
        
        cout << ans << endl;
    }

}
