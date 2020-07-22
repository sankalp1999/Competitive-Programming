#!bin/bash
for f in *; do 
    mv -- "$f" "${f%}.py"
done
