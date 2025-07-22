#!/bin/bash

if [ $# -eq 0 ]; then
    echo "Please provide a filename as argument"
    exit 1
fi

filename=$1

# Create file and populate with C++ template
cat > "$filename" << EOL
#include <iostream>
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {

}
EOL

echo "Created $filename with C++ template"
