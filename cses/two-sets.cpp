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

    long long total_sum = (n*(n+1))/2;

    if (total_sum % 2 != 0)
    {
        cout << "NO" << endl;
        return 0;
    }


    long long target_sum = total_sum / 2;
    
    vector<int> set1, set2;
    
    for (long long i = n; i >= 1; i--)
    {
        if (target_sum >= i)
        {
            set1.push_back(i);
            target_sum -= i;
        }
        else
        {
            set2.push_back(i);
        }
    }

    cout << "YES" << endl;

    cout << set1.size() << endl;
    for (int num : set1)
    {
        cout << num << " ";
    }

    cout << endl;

    cout << set2.size() << endl;
    for (int num : set2)
    {
        cout << num << " ";
    } 
    cout << endl;

}
