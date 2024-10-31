#include "MyClass.h"
#include <cmath>
#include <vector>

const std::vector<double> B = { 1.0 / 6, -1.0 / 30, 1.0 / 42, -1.0 / 30, 5.0 / 66 };

double MyClass::FuncA(double x, int n) {
    double sum = x; 

    for (int i = 1; i < n; ++i) {
        if (i - 1 >= B.size()) break;
        
        double term = (B[i - 1] * pow(-4, i) * (1 - pow(4, i)) * pow(x, 2 * i - 1)) / std::tgamma(2 * i + 1);
        sum += term;
    }

    return sum;
}
