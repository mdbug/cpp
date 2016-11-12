#include <iostream>
#include <iomanip>
#include <vector>

class Kontakt {
public:
    virtual void monatsreport() = 0;

private:
    /* data */
    std::string name;
    int alter;
};

class Kunde : public Kontakt {
public:
    Kunde(int kontostand) : kontostand(kontostand) {}
    void monatsreport() {
        std::cout << kontostand << std::endl;
    }
private:
    /* data */
    int kontostand;
};

class Lieferant : public Kontakt {
public:
    Lieferant(std::string bankverbindung) : bankverbindung(bankverbindung) {}
    void monatsreport() {
        std::cout << bankverbindung << std::endl;
    }
private:
    /* data */
    std::string bankverbindung;
};

int main() {
    std::vector<Kontakt*> v;
    Kunde k1(34);
    Kunde k2(45);
    Lieferant l1("DE23423423");
    Lieferant l2("DEasdfsdfsfd");
    v.push_back(&k1);
    v.push_back(&k2);
    v.push_back(&l1);
    v.push_back(&l2);

    for (auto k : v) {
        k->monatsreport();
    }
}
