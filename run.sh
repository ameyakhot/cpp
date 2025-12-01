#!/bin/bash

# Script to compile and run a C++ file
# Usage: ./run_cpp.sh <filename>
# Example: ./run_cpp.sh functions

if [ $# -eq 0 ]; then
    echo "Usage: $0 <filename>"
    echo "Example: $0 functions"
    exit 1
fi

FILENAME=$1
CPP_FILE="${FILENAME}.cpp"
EXE_FILE="${FILENAME}"

# Check if .cpp file exists
if [ ! -f "$CPP_FILE" ]; then
    echo "Error: $CPP_FILE not found!"
    exit 1
fi

# Compile
echo "Compiling $CPP_FILE..."
g++ "$CPP_FILE" -o "$EXE_FILE"

# Check if compilation succeeded
if [ $? -eq 0 ]; then
    echo "Compilation successful!"
    echo "Running $EXE_FILE..."
    echo "---"
    ./"$EXE_FILE"
else
    echo "Compilation failed!"
    exit 1
fi

