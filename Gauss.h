//
// Created by M17-612 on 26.12.2017.
//

#ifndef ZACHET_GAUSS_H
#define ZACHET_GAUSS_H
#include <iostream>
#include <cmath>

using namespace std;

class Gauss {
public:
    double x;
    double sigma;
    double mu;
    double density;
    double raspr;

    Gauss();
    Gauss(double sigma, double mu);
    ~Gauss();

    void print() {
        cout <<"x:" << x << "Sigma: " << sigma << "Mu: " << mu  << "Density: " << density << "raspr:" << raspr << endl;
    }

};


#endif //ZACHET_GAUSS_H
