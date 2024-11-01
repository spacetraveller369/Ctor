#include <string>
#include <iostream>
using namespace std;

class Computer {

private:
    string kind;
    int price;
    int age;
    string origin;
    string color;
    string condition;

public:

    //constructor

    Computer();
    Computer(string kind, int price);
    Computer(string kind, int price, int age, string origin, string color, string condition);

    //Getter

    void SetKind(string k);
    void SetPrice(int p);
    void SetAge(int a);
    void SetOrigin(string o);
    void SetColor(string c);
    void SetCondition(string condition);

    //Setter

    string GetKind();
    int GetPrice();
    int GetAge();
    string GetOrigin();
    string GetColor();
    string GetCondition();

    //Method

    void Eat(string electricity);
    void Teach();
    void Give(string money);
    void Joy();
    void DisplayInfo() const;

};

