#include "Cockroach.h"


Cockroach::Cockroach() {

    name = "Viktor";
    size = 10;
    paws_count = 4;
    color = "brown";
    desire = "eat";
    is_alive = true;
    is_awful = true;
    is_dang = false;
    hungry = true;

}

Cockroach::Cockroach(string name) : Cockroach(name, 5) {}

Cockroach::Cockroach(string name, double size) : Cockroach(name, size, 3, "red", "run", true, true, false, false) {}

Cockroach::Cockroach(string name, double size, int paws_count, string color, string desire, bool is_alive, bool is_awful, bool is_dang, bool hungry ) {

    SetName(name);
    SetSize(size);
    SetPawsCount(paws_count);
    SetColor(color);
    SetDesire(desire);
    SetAliveStatus(is_alive);
    SetAfwulStatus(is_awful);
    SetDangStatus(is_dang);
    SetHungryStatus(hungry);
}

void Cockroach::SetName(string n) {
    name = n;
}
void Cockroach::SetSize(double s) {
    if (s >= 1 && s <= 30) {
        size = s;
    }
    else {
        cout << "Size is unreal\n";
    }
}
void Cockroach::SetPawsCount(int pc) {
    if (pc == 4) {
        paws_count = pc;
    }
    else {
        cout << "Maybe cockroach is disabled?\n";
    }
}
void Cockroach::SetColor(string c) {
    color = c;
}
void Cockroach::SetDesire(string d) {
    desire = d;
}
void Cockroach::SetAliveStatus(bool alive) {
    if (alive) {
        is_alive = true;
        cout << "Cockroach is alive.\n";
    }
    else {
        is_alive = false;
        cout << "Cockroach is not alive.\n";
    }
}
void Cockroach::SetAfwulStatus(bool awful) {
    if (awful) {
        is_awful = true;
        cout << "Cockroach is awful.\n";
    }
    else {
        is_awful = false;
        cout << "Cockroach is nice.\n";
    }
}
void Cockroach::SetHungryStatus(bool hungry) {
    if (hungry) {
        hungry = true;
        cout << "Cockroach is hungry.\n";
    }
    else {
        hungry = false;
        cout << "Cockroach is not hungry.\n";
    }
}

void Cockroach::SetDangStatus(bool dang) {
    if (dang) {
        is_dang = true;
        cout << "Cockroach is dangerous for your life!!!.\n";
    }
    else {
        is_dang = false;
        cout << "Cockroach is safe.\n";
    }

}


string Cockroach::GetName() {
    return name;
}
double Cockroach::GetSize() {
    return size;
}
int Cockroach::GetPawsCount() {
    return paws_count;
}
string Cockroach::GetColor() {
    return color;
}
string Cockroach::GetDesire() {
    return desire;
}
bool Cockroach::GetAliveStatus() {
    return is_alive;
}
bool Cockroach::GetAwfulStatus()
{
    return is_awful;
}
bool Cockroach::GetDangStatus()
{
    return is_dang;
}
bool Cockroach::GetHungryStatus() {
    return hungry;
};


void Cockroach::Eat(string meal) {
    cout << GetName() << " is eating...\n";
    activity = 100;
    hungry = true;
}

void Cockroach::Sleep() {
    cout << GetName() << " is sleeping...\n";
    activity = 100;
    hungry = false;
}

void Cockroach::Run(string slipper) {
    if (activity > 50)
    {
        cout << GetName() << " running...";
        activity -= 30;
        hungry = true;
        paws_count -= 1;
    }
}

void Cockroach::MakeDisaster() {
    cout << GetName() << " is making a disaster everywhere he appears...\n";
}

void Cockroach::Frighten() {
    cout << GetName() << "  frightens everyone in the house...\n";
}

void Cockroach::DisplayInfo() const {

    cout << "Cockroach Information:" << "\n";
    cout << "  Name: " << name << "\n";
    cout << "  Size: " << size << " cm" << "\n";
    cout << " Paws: " << paws_count << "\n";
    cout << " Color: " << color << "\n";
    cout << " Desire: " << desire << "\n";
    cout << " Is Alive: " << (is_alive ? "Yes" : "No") << "\n";
    cout << " Is Awful: " << (is_awful ? "Yes" : "No") << "\n";
    cout << " Is Dangerous: " << (is_dang ? "Yes" : "No") << "\n";
    cout << " Is Hungry: " << (hungry ? "Yes" : "No") << "\n\n";
}