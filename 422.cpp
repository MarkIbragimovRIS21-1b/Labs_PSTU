#include <iostream>
#include <clocale>
using namespace std;
int main()
{
int a, b, c, x, y, z, h, m, s;
setlocale (LC_ALL, "Russian");
cout << "Введите первую временную границу: " << endl;
cin >> a >> b >> c;
cout << "Введите последнюю временную границу: " << endl;
cin >> x >> y >> z;
h = ((x*3600 + y*60 + z) - (a*3600+ b*60 + c))/3600;
m = (((x*3600 + y*60 + z) - (a*3600+ b*60 + c)) - h*3600)/60;
s = ((x*3600 + y*60 + z) - (a*3600+ b*60 + c)) - h*3600 - m*60;
cout << "Временной промежуток равен: " << h << " часов " << m << " минут " << s << " секунд.";
return 0;
}
