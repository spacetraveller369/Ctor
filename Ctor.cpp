#include <iostream>
#include "Person.h"
#include "Cockroach.h"
#include "Plant.h"
#include "Computer.h"

int main() {

Person person1;
Person person2("Sam", 28, "China", 190, 70, "white", "good", "collecting", "love", true, false);

person1.DisplayInfo();
person2.DisplayInfo();

cout << "\n";

Cockroach cockroach1;
Cockroach cockroach2;

cockroach1.DisplayInfo();
cockroach2.DisplayInfo(); //когда я передаю сюда значения, выдает ошибку "слишком много аргументов"

cout << "\n";

Plant plant01;
Plant plant02;

plant01.DisplayInfo();
/*plant02.DisplayInfo("rose", 1, "Sweden", 1, 1, "pink", "good", "sun", true, true);*/ //не хочет показываться. тоже самое

cout << "\n";

Computer computer01;
Computer computer02;

computer01.DisplayInfo();
computer02.DisplayInfo(); //и тут тоже самое!


}
