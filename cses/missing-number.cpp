#include <iostream>

using namespace std;

int main() {

    long long n;
    cin >> n;
    
    long long num;
    long long actual_sum = 0;
    for(int i = 0; i < n-1; i++) {
        cin >> num;
        actual_sum += num;
    }

    long long full_sum = (n*(n+1))/2;

    cout << (full_sum - actual_sum);
    return 0;
}
