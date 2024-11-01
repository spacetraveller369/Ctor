#include "Plant.h"

Plant::Plant() { 

    kind = "hibiscus";
    age = 1;
    country = "Ukraine";
    height = 30;
    weight = 2;
    color = "green";
    condition = "good";
    desire = "water";
    alive = true;
    hungry = true;
}

Plant::Plant(string kind) : Plant(kind, 1) {} 

Plant::Plant(string kind, int age) : Plant(kind, age, "Ukraine", 10, 1, "pink", "good", "sun", true, false) {}

Plant::Plant(string kind, int age, string country,  double height, double weight, string color, string condition, string desire, bool alive, bool hungry) {

    SetKind(kind);
    SetAge(age);
    SetCountry(country);
    SetHeight(height);
    SetWeight(weight);
    SetColor(color);
    SetCondition(condition);
    SetDesire(desire);
    SetAliveStatus(alive);
    SetHungryStatus(hungry);
}

void Plant::SetKind(string k) {
    kind = k;
}

void Plant::SetAge(int a) {
    age = a;
}

void Plant::SetCountry(string c) {
    country = c;
}
void Plant::SetHeight(double h) {
    if (h >= 1 && h <= 50) {
        height = h;
    }
}
void Plant::SetWeight(double w) {
    if (w >= 1 && w <= 10) {
        weight = w;
    }
}
void Plant::SetColor(string clr) {
    color = clr;
}
void Plant::SetCondition(string cnd) {
    condition = cnd;
}

void Plant::SetDesire(string d) {
    desire = d;
}
void Plant::SetAliveStatus(bool alive) {
    if (alive) {
        alive = true;
        cout << "Plant is alive.\n";
    }
}
void Plant::SetHungryStatus(bool hungry) {
    if (hungry) {
        hungry = true;
        cout << "Plant is hungry.\n";
    }
}

string Plant::GetKind() {
    return kind;
}
int Plant::GetAge() {
    return age;
}
string Plant::GetCountry() {
    return country;
}
double Plant::GetHeight() {
    return height;
}
double Plant::GetWeight() {
    return weight;
}
string Plant::GetColor() {
    return color;
}
string Plant::GetCondition() {
    return condition;
}

string Plant::GetDesire() {
    return desire;
}
bool Plant::GetAliveStatus() {
    return alive;
}
bool Plant::GetHungryStatus() {
    return hungry;
};


void Plant::Drink(string water) {
    cout << GetKind() << " is drinking...\n";
    hungry = false;
    height += 2;
    weight += 2;
}

void Plant::Grow() {
    cout << GetKind() << " is growing...\n";
    activity = 100;
    hungry = true;
    height += 2;
}

void Plant::Give(string oxygen) {
    cout << GetKind() << " is giving me an oxygen to breathe...\n";
}

void Plant::Joy() {
    cout << GetKind() << " is giving a joy to my cat...\n";
}

void Plant::DisplayInfo() const {

    cout << "Plant Information:" << "\n";
    cout << "  Kind: " << kind << "\n";
    cout << "  Age: " << age << " years" << "\n";
    cout << " Country: " << country << "\n";
    cout << " Height: " << height << "\n";
    cout << " Weight: " << weight << "\n";
    cout << " Color: " << color << "\n";
    cout << "  Condition: " << condition << "\n";
    cout << " Desire: " << desire << "\n";
    cout << " Is Alive: " << (alive ? "Yes" : "No") << "\n";
    cout << " Is Hungry: " << (hungry ? "Yes" : "No") << "\n\n";
}
