#include <iostream>
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <unordered_map>
#include <string>

using namespace std;

int main() {

    string input;
    cin >> input;

    unordered_map<int, int> map; // k: Char, v: # of Occurrences

    for (int i = 0; i < input.size(); i++)
    {
        map[input[i]]++;
    }

    // for (const auto& pair : map) {
    //     cout << (char)pair.first << ": " << pair.second << endl;
    // }

    char odd_char = '\0';
    bool has_odd = false;
    string first_half = "";


    for (const auto& pair : map)
    {
        if (pair.second % 2 == 1) // Find any characters that occur an odd-number of times
        {
            if (has_odd) // This would mean more than 1 char occurs an odd number of times
            {
                cout << "NO SOLUTION";
                return 0;
            }
            has_odd = true;
            odd_char = pair.first;
        }

        int count = 0; // Build first half of string
        while (count < (pair.second / 2))
        {
            first_half += char(pair.first);
            count++;
        }
    }

    // Build result
    string result = first_half;
    
    if (has_odd)
    {
        result += odd_char;
    }

    string reversed = first_half;
    reverse(reversed.begin(), reversed.end());
    result += reversed;

    cout << result;
}
