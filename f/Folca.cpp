#include <iostream>
using namespace std;

void print(string* str, size_t length) {
    for (size_t i = 0; i < length; ++i) {
        cout << str[i] << " "; 
    }
    cout << endl;
}
int main() {
    string* str = (string*)malloc(sizeof(string)*4);
    str[0] = "Dies";
    str[1] = "ist";
    str[2] = "ein";
    str[3] = "Satz";

    print(str, 4);

    free(str);

    //print(str, 4);

    str = new string[4];
    str[0] = "Dies";
    str[1] = "ist";
    str[2] = "ein";
    str[3] = "Satz";

    print(str, 4);

    delete[] str;

    print(str, 4);
}
