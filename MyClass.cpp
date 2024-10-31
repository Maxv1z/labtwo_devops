#include "MyClass.h"
#include <cmath>

double MyClass::FuncA() {
    double sum = 3;

    for (int i = 1; i < 3; ++i) {
        if (i - 1 >= B.size()) break; // Avoid accessing beyond precomputed Bernoulli numbers
        
        // Calculate the ith term of the series
        double term = (B[i - 1] * pow(-4, i) * (1 - pow(4, i)) * pow(x, 2 * i - 1)) / std::tgamma(2 * i + 1);
        sum += term;
    }

    return sum;
}