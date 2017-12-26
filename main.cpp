#include <iostream>
#include <cstdlib>
#include <vector>

#include "Gauss.h"

using namespace std;

const int N=200;
double mu = 0;
double sigma = 1;
double sum;
double sum1;
double Gauss(double mu, double sigma, double x) {

  return (1/sigma/(sqrt(2*3.14)))*exp(-(x-mu)*(x-mu)/2/sigma/sigma);


}

int main() {
    vector <double> A;

    for (double i=-10; i<10; i+=0.1) {
        A.push_back(Gauss(mu, sigma, i));
    }



for (double i=0; i<A.size(); i++) {



    cout <<"density: " << A[i] << endl;
}
    for (double i=0; i<A.size(); i++) {
        sum+=A[i];
    }
    cout << "Summa bez normirovki: "<<sum << endl;




    for (double i=0; i<A.size(); i++) {
        sum1+=(A[i]/sum);
        cout <<sum1 << endl;
    }


    return 0;
}