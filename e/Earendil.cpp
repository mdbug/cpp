#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct pixel {
    uint_least8_t r;
    uint_least8_t g;
    uint_least8_t b;
    uint_least8_t a;
};

int main()
{
    cout << sizeof(pixel) << endl;
    return EXIT_SUCCESS;
}
