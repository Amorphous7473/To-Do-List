#!/usr/bin/env bash

# Resolve the directory where this script is located
SCRIPT_DIR="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" &> /dev/null && pwd)"

CPP_FILE="$SCRIPT_DIR/tasks.cpp"
BIN_FILE="$SCRIPT_DIR/todo_bin"

# Automatically compile if binary is missing or C++ file was updated
if [ ! -f "$BIN_FILE" ] || [ "$CPP_FILE" -nt "$BIN_FILE" ]; then
    g++ -O2 "$CPP_FILE" -o "$BIN_FILE" || exit 1
fi

# Run inside the script's directory so relative paths (like tasks.txt) work properly
cd "$SCRIPT_DIR" || exit 1
"$BIN_FILE"
