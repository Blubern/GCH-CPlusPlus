# Hints for 3_Test_CompoundInterestCalc

## Problems with main() in 2_CompoundInterestCalc
You may want to comment out the main()-section in the 2_CompoundInterestCalc.cpp file. You only need the compound interest function.

## Install test library
You may have trouble with a test library. How to install gtest:

```bash
sudo apt-get update && sudo apt-get install libgtest-dev cmake -y

cd /usr/src/gtest
sudo cmake CMakeLists.txt
sudo make

sudo cp *.a /usr/lib
```
You may need to restart your codespace and navigate back to your project directory in the terminal.

## Compile and execute a test file
```bash
g++ -std=c++11 -o outputName testFile.cpp -lgtest -lgtest_main -pthread
./outputName
```