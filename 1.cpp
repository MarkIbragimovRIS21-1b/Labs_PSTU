#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int a = 0, b = 0, c = 0, x = 0;
bool k = false;
cout << "Введите трёхзначное число: ";
cin >> x;
while ((x < 100) || (x > 999))
cin >> x;
a = x % 10;
x /= 10;
b = x % 10;
c = x / 10;
if (k == false) {
if ((a == b) || (a == c) || (b == c)) {
cout <<"Цифры в числе не могут повторяться" << endl;
cin >> x;
a = x % 10;
x /= 10;
b = x % 10
c = x / 10;
}
else
k = true;
}
cout << a << b << c << endl;
cout << a << c << b << endl;
cout << b << a << c << endl;
cout << b << c << a << endl;
cout << c << b << a << endl;
cout << c << a << b << endl;
сout << "Самое большое число: ";
if ((a > c) && (a > b))
cout << a << fmax(b, c) << fmin(b, c);
if ((b > c) && (b > a))
cout << b << fmax(a, c) << fmin(a, c);
if ((c > a) && (c > b))
cout << c << fmax(b, a) << fmin(b, a);
return 0;
}
