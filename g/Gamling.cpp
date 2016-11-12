#include <iostream>
using namespace std;

struct Koordinaten {
    double x;
    double y;
};

class Punkt {
public:
    Punkt () : x(0), y(0) {}
    Punkt (double x, double y) : x(x), y(y) {}
    Punkt (const Punkt& p) : Punkt(p.x, p.y) {}
    Punkt (Koordinaten k) : x(k.x), y(k.y) {}
    ~Punkt () {
        std::cout << "Der Punkt wird zerstört" << std::endl;
    }

    Punkt & operator = (Punkt p) {
        swap(*this, p);
        return *this;
    }

    void setX(double x) {
        this->x = x; 
    }
    void setY(double y) {
        this->y = y; 
    }
    double getX() {
        return x;
    }
    double getY() {
        return y;
    }

private:
    double x;
    double y;

    friend ostream& operator << (ostream& os, const Punkt & p) {
        os << p.x << ", " << p.y;
        return os;
    }
};

int main()
{
    Punkt p1;
    Punkt p2(3, 7);
    Punkt p3(p2);
    Koordinaten c;
    c.x = 96;
    c.y = 1337;
    Punkt p4(c);

    std::cout << p1 << std::endl;
    std::cout << p2 << std::endl;
    std::cout << p3 << std::endl;
    std::cout << p4 << std::endl;

    p2.setX(72);
    std::cout << p2 << std::endl;
    std::cout << p3 << std::endl;
    return 0;
}
