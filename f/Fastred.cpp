#include <iostream>
using namespace std;

int main() {
    float f = 23.234f;
    const float cf = 23.46f;
    cout << f << endl;
    cout << cf << endl;
    float* p = &f;
    //float* p2 = &cf; //Geht nicht
    float* p2 = (float*) &cf;
    const float* cp = &cf;
    //cp = &f; //Das geht!

    *p = 999999.f;
    cout << f << endl;
    *p2 = -213.99f;
    cout << cf << endl;
    //*cp = 11111.11f; //Compiliert nicht
    cout << cf << endl;

    return 0;
}
