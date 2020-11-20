
#include <stdio.h>
#include <iostream>
#include <string>
#include <windows.h>

using namespace std;
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    string str;
    int n = -2;//Крок
    cin >> str;//Ввід тексту
    //Формула кроку
    for (int i = 0; i < str.length(); i++)
    {
        if (int(str[i]) >= (int('я') - (n - 1)))
        {
            str[i] = char(int('а') + ((n - 1) + (int('я') - str[i])));
        }
        else
        {
            str[i] = char(int(str[i]) + n); 
        }
    }
    cout << str;//Вивід
    return 0;
    
}