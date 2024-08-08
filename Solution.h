#pragma once
#include "utils.h"
#include <vector>
#include <string>
#include <sstream>

class Solution{
    public:
        Solution(int numberOfBits);
        std::string toString();
    private:
        int mNumbersOfBits;
        std::vector<int> mBits; // chromosomes
};