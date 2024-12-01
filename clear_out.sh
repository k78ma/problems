#!/bin/bash

# Remove all executable files based on common extensions
find . -type f -name "*.exe" -delete
find . -type f -name "*.out" -delete
find . -type f -name "*.app" -delete
find . -type f -name "*.dll" -delete
find . -type f -name "*.dylib" -delete
find . -type f -name "*.so" -delete

echo "Cleared all executable files"
