#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    string s;
    cout << "Text: ";
    cin >> s;
    try {
        int a = stoi(s);
        float b = stof(s);
        double c = stod(s);
        string as = to_string(a);
        string bs = to_string(b);
        string cs = to_string(c);
        cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
        cout << "as = " << as << ", bs = " << bs << ", cs = " << cs << endl;
    } catch(invalid_argument e) {
        cout << "Invalid String" << endl;
    }

    //Bei ungültiger Eingabe:
    //terminate called after throwing an instance of 'std::invalid_argument'
    return EXIT_SUCCESS;
}
