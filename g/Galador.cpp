#include<iostream>
using namespace std;

class Bruch
{
  public:
    Bruch () : zaehler(1), nenner(1) {}; 
    Bruch (int zaehler, int nenner) : zaehler(zaehler), nenner(nenner) {}; 
    Bruch (const Bruch& b) : zaehler(b.zaehler), nenner(b.nenner) {};
    ~Bruch () {
        std::cout << "Bruch wird zerstört" << std::endl;
    }
    
    void setZaehler(int z) {
        zaehler = z;  
    }

    int getZaehler() const {
        return zaehler;
    }

    void setNenner(int n) {
        nenner = n;  
    }

    int getNenner() const {
        return nenner;
    }
  private:
    int zaehler;
    int nenner;


  friend ostream& operator<< (ostream& os, const Bruch& b) {
      return os << b.zaehler << "/" << b.nenner;
  }
};

int main()
{
    Bruch b1;
    Bruch b2(2,3);
    Bruch b3=b2; //Copyconstructor

    std::cout << b1 << std::endl;
    std::cout << b2 << std::endl;
    std::cout << b3 << std::endl;

    b1.setZaehler(4);
    std::cout << b1 << std::endl;

}
