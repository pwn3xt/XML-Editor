#pragma once
#include <vector>
#include <string>
#include <iostream>
#include <string>
#include <fstream>
#include<sstream>
//#include "Dict.h"
//template <typename T>T sum(std::vector<T> nums);
//template <typename T>T sum(std::vector<T> nums);}
namespace std
{

    template <typename T>T sum(std::vector<T> nums) {
        T sum = 0;
        for (T num : nums)
        {
            sum += num;
        }
        return sum;
    }
    vector<string> stringToList(string str, char sep = ' ',bool greedy = true);
    //string replace(string str, Dict<char> dict,char sep = ' ');
    int nextPrime(int num);
    bool isPrime(int num);
    string erase_unwanted_chars(string str);
    string format_newLine(string str, int level, int maxChar = 75);
    string insert_taps(int level);
    string readFileBytes(const string& fileName);
    void writeFileBytes(const string& fileName, const string& content);
}
