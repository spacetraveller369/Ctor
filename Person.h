#include <string>
#include <iostream>
using namespace std;

class Person {

private:
    string name;
    int age;
    string country;
    double height;
    double weight;
    string color_hair;
    string mood;
    string hobby;
    string dream;
    bool is_alive = true;
    bool hungry = true;

    long long exp; // ����
    short activity = 100; // ����� ������� (0-100)


public:

    Person(); //����������� ��� ����������
    Person(string name);
    Person(string name, int age);
    Person(string name, int age, string country, double height, double weight, string color_hair, string mood, string hobby, string dream, bool is_alive, bool hungry);

    void SetName(string n); //������
    void SetAge(int a);
    void SetCountry(string c);
    void SetHeight(double h);
    void SetWeight(double w);
    void SetColorHair(string ch);
    void SetMood(string m);
    void SetHobby(string hb);
    void SetDream(string d);
    void SetAliveStatus(bool is_alive);
    void SetHungryStatus(bool hungry);

    string GetName(); //������
    int GetAge();
    string GetCountry();
    double GetHeight();
    double GetWeight();
    string GetColorHair();
    string GetMood();
    string GetHobby();
    string GetDream();
    bool GetAliveStatus();
    bool GetHungryStatus();

    void Eat(string meal); //������ 
    void Sleep();
    void Walk(string street);
    void Work();
    void Read();
    void DisplayInfo() const;

};