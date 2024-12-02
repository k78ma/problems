#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <unordered_map>

using namespace std;

int main() {
    ifstream file("day1_input.txt");

    vector<int> first_col;
    vector<int> second_col;
    
    int num1, num2;
    while (file >> num1 >> num2) {
        first_col.push_back(num1);
        second_col.push_back(num2);
    }

    sort(first_col.begin(), first_col.end());
    sort(second_col.begin(), second_col.end());

    long long sum = 0;

    for (int i = 0; i < first_col.size(); i++) {
        sum += abs(first_col[i] - second_col[i]);
    }

    cout << "Part 1: " << sum << endl;

    unordered_map<int, int> hashmap;

    // Build hashmap for 2nd column
    for (int i = 0; i < second_col.size(); i++)
    {
        hashmap[second_col[i]]++;
    }

    long long similarity_score = 0;
    for (int i = 0; i < first_col.size(); i++)
    {
        similarity_score += first_col[i] * hashmap[first_col[i]];
    }

    cout << "Part 2: " << similarity_score << endl;

    return 0;
}
