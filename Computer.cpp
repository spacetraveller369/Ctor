#include "Computer.h"

Computer::Computer() {
    kind = "Dell";
    price = 600;
    age = 2;
    origin = "China";
    color = "black";
    condition = "good";
   
}

Computer::Computer(string kind, int price) : Computer(kind, price, 1, "USA", "black", "good") {}

Computer::Computer(string kind, int price, int age, string origin, string color, string condition) {

    SetKind(kind);
    SetPrice(price);
    SetAge(age);
    SetOrigin(origin);
    SetColor(color);
    SetCondition(condition);
}


void Computer::SetKind(string kind) {
    this->kind = kind;
}

void Computer::SetPrice(int price) {
    this->price = price;
}

void Computer::SetAge(int age) {
    if (age >= 1) this->age = age;
    else throw "Unreal age!\n";
    }

void Computer::SetOrigin(string origin) {
    this->origin = origin;
}

void Computer::SetColor(string color) {
    this->color = color;
}
void Computer::SetCondition(string condition) {
    this->condition = condition;
}





string Computer::GetKind() {
    return kind;
}
int Computer::GetPrice() {
    return price;
}
int Computer::GetAge() {
    return age;
}
string Computer::GetOrigin() {
    return origin;
}
string Computer::GetColor() {
    return color;
}
string Computer::GetCondition() {
    return condition;
};


void Computer::Eat(string electricity) {
    cout << GetKind() << "  eats some electricity..\n";
}

void Computer::Teach() {
    cout << GetKind() << "  teaches me...\n";
}

void Computer::Give(string money) {
    cout << GetKind() << "  gives me some money...\n";
}

void Computer::Joy() {
    cout << GetKind() << "  shows me films...\n";
}

void Computer::DisplayInfo() const {

    cout << "Information:" << "\n";
    cout << "Kind: " << kind << "\n";
    cout << "Price: " << price << "$" << "\n";
    cout << "Age:  " << age << "\n";
    cout << "Color: " << color << "\n";
    cout << "Condition: " << condition << "\n";
}