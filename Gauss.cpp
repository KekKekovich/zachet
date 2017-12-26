//
// Created by M17-612 on 26.12.2017.
//

#include "Gauss.h"
#include <cmath>
#include <cstdlib>

double Rand (double fMin, double fMax){
     double f=(double)rand()/ RAND_MAX;
     return fMin+f*(fMax-fMin);
 }


Gauss::~Gauss() {

}
