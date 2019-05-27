#!/bin/bash
mv example old_example
g++ -c bubble.cpp -std=c++17
g++ -o example bubble.o -std=c++17

