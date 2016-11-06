#include <iostream>
using namespace std;

int main() {
    int n1 = 0;

    int8_t* p = (int8_t*) &n1;

    ++p;

    *p = 0xFF;
    for (int i = 0; i < 30; ++i) {
        
    }

    cout << hex << n1 << endl;
}
