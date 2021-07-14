# Simple-BlockChain
A simple blockchain implementation using cpp for beginners.

## Pre-requesites
---
1. gcc/g++
2. cmake

## Build Steps
---
1. **cmake -S . -B ./build**, this will create a build folder with make files.
2. switch into the **build** directory and run **make**, this will create a executable called test-chain.
3. Then you can simply run the executable.

### Note:

Make sure to update the **_nDifficulty** nounce variable in the Blockchain Class contructor to lesser value in order to reduce the hash complexity.

