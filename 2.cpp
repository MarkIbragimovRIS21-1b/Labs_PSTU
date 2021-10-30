#include <iostream>
#include <ctime>
using namespace std;
int main()
{
srand(time(NULL));
int k = rand() % 99 + 1, x;
cout << "У вас есть 6 попыток угадать число от 1 до 99: ";
for (int i = 5; i > -1; i--) {
cin >> x;
if (x == k) {
cout << "Вы угадали число!";
break;
}
else
if (i > 0)
if (k > x) cout << "Загаданное число больше " << x << endl;
else if (k < x) cout << "Загаданное число меньше " << x << endl;
cout << "Попыток осталось: " << i << endl << "Введите число: ";
if (i == 0)
cout << "Попытки кончились";
}
return 0;
}
