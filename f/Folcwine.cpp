#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

typedef double (*func_t)(double);


double integral(double x1, double x2, int intervalle, func_t f) {
    double h = (x2-x1) / intervalle;
    double summe = 0;
    for (int i = 0; i < intervalle; ++i) {
        summe += f(x1- h/2 + i*h);
    }
    return h * summe;
}

double gerade(double x) {
    const double a = 1;
    const double c = 0;
    return a*x+c;
}

int main() {
    func_t f = sin; 
    //cout << integral(0, 2 * M_PI, 1000, f) << endl;
    printf("%.4f\n", integral(0, M_PI, 1000000, f));
    printf("%.4f\n", integral(0, 10, 1000000, gerade));
    
    return 0;
}
