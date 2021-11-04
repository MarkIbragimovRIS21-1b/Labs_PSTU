#include <iostream>
#include <clocale>
using namespace std;
int main()
{
setlocale(0, "");
float g;
cout << "Введите градус по Фаренгейту: " << endl;
cin >> g;
cout << "Градус по Цельсию равен: " << (g - 32) * 5.0 / 9;
return 0;
}
