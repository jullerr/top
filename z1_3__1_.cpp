#include <iostream>
#include <string>
using  namespace std;

int main() {
string day;
string temperature;
string precipitation;
string wind;
string humidity;

cout << "Хотите ли вы играть в бадминтон? (Да/Нет): ";
cin >> day;

if (day == "Да" || day == "да") {
cout << "Введите погодные условия:\n";
cout << "Температура (жарко/тепло/холодно): ";
cin >> temperature;
cout << "Осадки (ясно/облачно/дождь/снег/град): ";
cin >> precipitation;
cout << "Ветер (есть/нет): ";
cin >> wind;
cout << "Влажность (высокая/низкая): ";
cin >> humidity;

if (temperature == "тепло" && (precipitation == "ясно" || precipitation == "облачно") && wind == "нет" && humidity == "низкая") {
cout << "Да";
} else {
cout << "Нет";
}
} else {
cout << "Нет";
}

return 0;
}
