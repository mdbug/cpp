#include <iostream>
using namespace std;

void printReversed(const char** worte, int length) {
    for (int i=length-1; i>=0; i--) {
        cout << *worte << " ";
    }
}

int main()
{
    const char* worte[4] = {"Dies", "ist", "ein", "Satz"};
    printReversed(worte, 4);

}
