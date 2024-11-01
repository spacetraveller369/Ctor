#include <string>
#include <iostream>
using namespace std;

class Plant {

private:
    string kind;
    int age;
    string country;
    double height;
    double weight;
    string color;
    string condition;
    string desire;
    bool alive = true;
    bool hungry = true;

    short activity = 100;

public:

    Plant();
    Plant(string kind);
    Plant(string kind, int age);
    Plant(string kind, int age, string country, double height, double weight, string color, string condition, string desire, bool alive, bool hungry);
    

    void SetKind(string k);
    void SetAge(int a);
    void SetCountry(string c);
    void SetHeight(double h);
    void SetWeight(double w);
    void SetColor(string clr);
    void SetCondition(string cnd);
    void SetDesire(string d);
    void SetAliveStatus(bool alive);
    void SetHungryStatus(bool hungry);

    string GetKind();
    int GetAge();
    string GetCountry();
    double GetHeight();
    double GetWeight();
    string GetColor();
    string GetCondition();
    string GetDesire();
    bool GetAliveStatus();
    bool GetHungryStatus();


    void Drink(string water);

    void Grow();

    void Give(string oxygen);

    void Joy();

    void DisplayInfo() const;

};