#include <iostream>

int main()
{
    const size_t SIZE = 10;
    int n[SIZE];
    for (size_t i = 0; i < SIZE; ++i) {
       n[i] = 3*(i+1); 
    }
    int* p = &n[0];
    for (size_t i = 0; i < SIZE; ++i) {
        std::cout << *p << " | " << p << std::endl;    
        ++p;
    }

    return 0;
}
