
#include <iostream>
#include <iomanip>
#include "windows.h"
#include "math.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int i;
    double x, y, z;
    cout << "Введіть x: ";
    cin >> x;
    for (i = 1; i <= 5; i++)
    {
        y += log(i * x);
    }
    if (pow(x, 2) + 5 != 0)
    {
        z = cos(y) / pow(x, 2) + 5;
    }
    
    else
    {
        cout << "x не задовільняє ОДЗ" << endl;
    }
    cout << ("Y=") << z << endl;
    system("pause");
    return 0;
   else
    {
    cout << "x не задовільняє ОДЗ" << endl;
    }
}
    