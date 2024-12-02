#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

bool checkSequence(const vector<int>& report, bool checkingIncrease) {
    for (int i = 1; i < report.size(); i++) {
        if (checkingIncrease) {
            if (report[i] <= report[i-1] || report[i] - report[i-1] > 3) {
                return false;
            }
        } else {
            if (report[i] >= report[i-1] || report[i-1] - report[i] > 3) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    ifstream file("day2_input.txt");

    string line;
    vector< vector<int> > reports;

    while (getline(file, line)) 
    {
        vector<int> levels;
        istringstream iss(line);
        int level;
        
        while (iss >> level) 
        {
            levels.push_back(level);
        }
        
        if (!levels.empty()) 
        {
            reports.push_back(levels);
        }
    }

    file.close();

    // Part 1
    long long part1_counter = 0;
    for (const auto& report : reports) 
    {
        if (checkSequence(report, true) || checkSequence(report, false)) 
        {
            part1_counter++;
        }
    }

    cout << "Number of safe reports: " << part1_counter << endl;

    // Part 2
    long long part2_counter = 0;
    for (const auto& report : reports) {
        // First check if it's already safe without removing any number
        if (checkSequence(report, true) || checkSequence(report, false)) {
            part2_counter++;
            continue;
        }
        
        // Try removing each number one at a time
        bool canBeMadeSafe = false;
        for (int i = 0; i < report.size(); i++) {
            vector<int> modified = report;
            modified.erase(modified.begin() + i);
            
            if (checkSequence(modified, true) || checkSequence(modified, false)) {
                canBeMadeSafe = true;
                break;
            }
        }
        
        if (canBeMadeSafe) {
            part2_counter++;
        }
    }

    cout << "Number of safe reports with dampener: " << part2_counter << endl;


    return 0;
}
