#!/bin/bash

if [ -z "$1" ]; then
    echo "Usage: $0 source_directory"
    exit 1
fi

SOURCE_DIR="$1"
if [ ! -d "$SOURCE_DIR" ]; then
    echo "Error: Directory $SOURCE_DIR does not exist."
    exit 1
fi

mkdir -p "$SOURCE_DIR/images" "$SOURCE_DIR/documents" "$SOURCE_DIR/others"

for file in "$SOURCE_DIR"/*; do
    if [ -f "$file" ]; then
        # Get the file extension
        ext="${file##*.}"
        
        case "$ext" in
            jpg|png|gif)
                mv "$file" "$SOURCE_DIR/images/"
                ;;
            txt|doc|pdf)
                mv "$file" "$SOURCE_DIR/documents/"
                ;;
            *)
                mv "$file" "$SOURCE_DIR/others/"
                ;;
        esac
    fi
done

echo "Files have been organized."
