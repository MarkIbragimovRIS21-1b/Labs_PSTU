#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int a = 0, b = 0, c = 0, x = 0;
bool F = false;
cout << "Введите трёхзначное число: ";
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int a = rand() % 99 + 1, x;
    cout << "У вас есть 6 попыток угадать число от 1 до 99: ";
    for (int i = 5; i > -1; i--) {
        cin >> x;
        if (x == a) {
            cout << "Вы угадали число!";
            break;
        }
        else
            if (i > 0)
                if (a > x) cout << "Загаданное число больше " << x << endl;
                else if (a < x) cout << "Загаданное число меньше " << x << endl;
                cout << "Попыток осталось: " << i << endl << "Введите число: ";
        if (i == 0)
            cout << "Попытки кончились";
    }
    return 0;

}
