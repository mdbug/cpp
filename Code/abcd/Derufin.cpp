#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int pot(int b, int n) {
    return (n>0) ? b*pot(b, n-1) : 1;
}

int main()
{
    int b, n;
    cout << "b^n (Enter b and n!)" << endl;
    cin >> b >> n;
    cout << b << "^" << n << " = " << pot(b,n) << endl;
    return EXIT_SUCCESS;
}
