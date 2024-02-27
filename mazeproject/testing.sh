#!/bin/bash

echo -e "~~ Argument Tests ~~"

echo -n "Testing no arguments - "
./maze > tmp 
if grep -q "Usage: ./maze <filename>" tmp;
then
    echo -e "\e[32mPASS\e[0m" #green
else
    echo -e "\e[31mFAIL\e[0m" #red
fi

echo -n "Testing 2 arguments - "
./maze x x > tmp 
if grep -q "Usage: ./maze <filename>" tmp;
then 
    echo -e "\e[32mPASS\e[0m"
else 
    echo -e "\e[31mFAIL\e[0m"
fi

echo -e "\n~~ File Handling~~"

echo -n "Testing if file couldn't open or bad name - "
./maze bad_name.txt > tmp
if grep -q "File couldn't open." tmp;
then 
    echo -e "\e[32mPASS\e[0m"
else 
    echo -e "\e[31mFAIL\e[0m"
fi

echo -n "Testing bad data (missing) - "
./maze missing_maze.txt > tmp
if grep -q "Please input a file with a maze in it, as this one doesn't possess one." tmp;
then 
    echo -e "\e[32mPASS\e[0m"
else 
    echo -e "\e[31mFAIL\e[0m"
fi

echo -n "Testing bad data (wrong measurements) - "
./maze invalid_maze_1.txt > tmp
if grep -q "Measurements of the maze aren't valid." tmp;
then 
    echo -e "\e[32mPASS\e[0m"
else 
    echo -e "\e[31mFAIL\e[0m"
fi

echo -n "Testing bad data (a hash that's not suppose to be there) - "
./maze invalid_maze_2.txt > tmp
if grep -q "Measurements of the maze aren't valid." tmp;
then 
    echo -e "\e[32mPASS\e[0m"
else 
    echo -e "\e[31mFAIL\e[0m"
fi

echo -n "Testing if file loaded succesfully - "
./maze valid_maze.txt > tmp
if grep -q "File loaded successfully." tmp;
then 
    echo -e "\e[32mPASS\e[0m"
else 
    echo -e "\e[31mFAIL\e[0m"
fi

echo -e "\n ~~ Testing bad input ~~"

echo -n "Testing bad menu input (wrong) - "
echo "b" | ./maze valid_maze.txt > tmp
if grep -q "Wrong input, please reinput." tmp;
then 
    echo -e "\e[32mPASS\e[0m"
else 
    echo -e "\e[31mFAIL\e[0m"
fi

echo -n "Testing bad menu input (empty) - "
echo "" | ./maze valid_maze.txt > tmp
if grep -q "Wrong input, please reinput." tmp;
then 
    echo -e "\e[32mPASS\e[0m"
else 
    echo -e "\e[31mFAIL\e[0m"
fi

echo -n "Testing bad menu input (2 args) - "
echo "a a" | ./maze valid_maze.txt > tmp
if grep -q "Wrong input, please reinput." tmp;
then 
    echo -e "\e[32mPASS\e[0m"
else   
    echo -e "\e[31mFAIL\e[0m"
fi

echo -n "Testing if player hit a wall - "
echo "W\nD\nM" | ./maze valid_maze.txt > tmp
if grep -q "Thou has hit a wall. Please retry." tmp;
if
    then
        echo -e "\e[32mPASS\e[0m"
        echo -n "Testing if player location hasn't moved on the map - "
        if grep -q "##X##" tmp;
        then 
            echo -e "\e[32mPASS\e[0m"
        else 
            echo -e "\e[31mFAIL\e[0m" 
        fi
else 
    echo -e "\e[31mFAIL\e[0m" 
fi
fi

echo -n "Testing if player moved out of bounds - "
echo "W\nW\nd\nd\nd\nm" | ./maze valid_maze.txt > tmp
if grep -q "Thou is trying to leave map. Please retry." tmp;
then 
    echo -e "\e[32mPASS\e[0m"
    echo -n "Testing if player location hasn't moved on the map - "
        if grep -q "##  X" tmp;
        then 
            echo -e "\e[32mPASS\e[0m"
        else 
            echo -e "\e[31mFAIL\e[0m" 
        fi
else 
    echo -e "\e[31mFAIL\e[0m"
fi

echo -e "\n ~~ Testing success ~~"

echo -n "Testing if player actually moved and if it updated on the map - "
echo "W\nM" | ./maze valid_maze.txt > tmp
if grep -q "##X##" tmp;
then 
    echo -e "\e[32mPASS\e[0m"
else 
    echo -e "\e[31mFAIL\e[0m" 
fi

echo -n "Testing if program gives a message when finished with maze"
echo "W\nW\nD\nW\nW" | ./maze valid_maze.txt > tmp
if grep -q "Well done, thou has completed the maze." tmp;
then 
    echo -e "\e[32mPASS\e[0m"
else 
    echo -e "\e[31mFAIL\e[0m" 
fi

echo -n "Testing if player starts at S - "
echo "m" | ./maze valid_maze.txt > tmp
if grep -q "##X##" tmp;
then 
    echo -e "\e[32mPASS\e[0m"
else 
    echo -e "\e[31mFAIL\e[0m" 
fi

