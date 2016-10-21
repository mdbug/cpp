#include <iostream>

void swap(double* a, double* b) {
    double tmp = *a;
    *a = *b;
    *b = tmp;
}

void swap2(double& a, double& b) {
    double tmp = a;
    a = b;
    b = tmp;
}

//Tauscht zwei double Zeiger
void swap_ptr(double** a, double** b) {
    double* tmp = *a;
    *a = *b;
    *b = tmp;
}

//Tauscht zwei double Zeiger
void swap_ptr2(double*& a, double*& b) {
    double* tmp = a;
    a = b;
    b = tmp;
}

int main() {
    double d = 10;
    double e = 20;

    swap(&d, &e);

    std::cout << "d = " << d << std::endl;
    std::cout << "e = " << e<< std::endl;

    swap2(d, e);

    std::cout << "d = " << d << std::endl;
    std::cout << "e = " << e<< std::endl;
    
    double* pd = &d;
    double* pe = &e;

    swap_ptr(&pd, &pe);

    std::cout << "d = " << d << std::endl;
    std::cout << "e = " << e<< std::endl;

    swap_ptr2(pd, pe);

    std::cout << "d = " << d << std::endl;
    std::cout << "e = " << e<< std::endl;
}
