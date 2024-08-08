#include "utils.h"
#include <cstdlib>
#include <stdexcept>
#include <set>

// Estimation aléatoire de la proba de mutation
double randomDouble(){
    return double(rand() % 1000)/ 1000;
}

bool randomProbability(double probability){
    if (probability < 0 || probability>1){
        throw std::runtime_error("Proba shoud be between 0 and 1");
    }
    double r = randomDouble();
    if (r<probability){
        return true;
    }
    return false;
}

// Encoding algo to translate int or float to allow mutation
double precision(int low, int high, int numberOfBits){
    double prec = (double)(high - low) / (double)(pow(2, numberOfBits) - 1);
    return prec;
}

std::set<int> randomDistinctNumbers(int upperLimit, int howManyNumbers){
    std::set<int> numbers;
    while (numbers.size() < howManyNumbers){
        numbers.insert(rand() % upperLimit);
    }
    return numbers;
}

