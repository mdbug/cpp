#include <iostream>
using namespace std;

void exit() {
    cout << "Wait!!!11" << endl;
}   


int main() {
    atexit(exit);

    //Programm zum Absturz bringen
    for (int* i;; i++) {
       *i=1337; 
    }
    //exit wird nicht ausgefuehrt wenn das Programm abstuerzt :(
}
