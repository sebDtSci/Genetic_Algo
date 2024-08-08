#include "Solution.h"


Solution::Solution(int numberOfBits): mNumbersOfBits{numberOfBits}{
    mBits.reserve(numberOfBits);
    for (int i = 0; i<numberOfBits; i++){
        mBits.push_back(rand()%2);
    }
}

std::string Solution::toString(){
    std::ostringstream stream;
    stream << "[";
    for (int bit: mBits){
        stream << bit << " ";
    }
    stream << "]";
}

double Solution::bitsToDouble(){
    double precision = precision(low, high, mNumbersOfBits);
}

