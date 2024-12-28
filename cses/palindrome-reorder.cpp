#include <iostream>
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {

    string input;
    cin >> input;

    bool isEven = input.length() % 2 == 0;

    unordered_map<char, int> hmap;

    for (int i = 0; i < input.length(); i++)
    {
        hmap[input[i]] += 1;
    }

    if (isEven)
    {
        
    }

    

}
