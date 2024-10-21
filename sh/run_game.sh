#!/bin/bash

# Define variables for the files
SOURCE_FILE="../programs/game.cpp"
OUTPUT_FILE="../programs/game.out"
RESULT_FILE="../result.txt"

# Compile the C++ code
g++ "$SOURCE_FILE" -o "$OUTPUT_FILE"

# Check if the compilation was successful
if [ $? -eq 0 ]; then
    # Execute the compiled program and save the output
    "$OUTPUT_FILE" > "$RESULT_FILE"
    echo "Program executed. Result saved in $RESULT_FILE"
else
    echo "Compilation error. Please check the code in $SOURCE_FILE"
fi
