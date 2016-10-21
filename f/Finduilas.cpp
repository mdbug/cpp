#include <iostream>

int main() {
    int n1 = 1;
    int n2 = 2;

    int* p;
    int** pp;

    // p zeigt auf n1
    p = &n1;

    *p = 1000;

    // p zeigt jetzt auf n1
    p = &n2;
    // pp zeigt auf p
    pp = &p;

    **pp = 2000;

    std::cout << "n1 = " << n1 << std::endl;
    std::cout << "n2 = " << n2 << std::endl;
}
