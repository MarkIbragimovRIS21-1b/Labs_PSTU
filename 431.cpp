#include <iostream>
#include <clocale>
using namespace std;
int main()
{
setlocale(LC_ALL, "Russian");
int a, b;
cout << "Введите два числа:" << endl;
cin >> a;
cin >> b;
cout << "Результат: " << a*b;
return 0;
}
