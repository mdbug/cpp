#include <iostream>
using namespace std;

int main()
{
    const char* str = "Hallo";
    char* p = (char*)str;
    do {
       cout << *p << " (ASCII " << (int)*p << ", ptr " << (void*)p << ")" << endl;
       p++;
    } while (*p != '\0');
    return 0;
}
