#include <iostream>
#include <iomanip>
#include <windows.h>
#include<conio.h>

using namespace std;

struct Books {
    char name[200];
    unsigned int count;
    float price;
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "\t***Ласкаво просимо до нашої Книжеової Крамнички***\n";
    Books b[9] = { {"Там, у темній річці", 200, 160.5 },
    {"Чотири сезони", 920 , 230},
    {"Людина, що хотіла бути щасливою",30 ,120},
    {"Лабіринт Фавна",169 ,135},
    {"Наречені з того світу",78 ,95},
    {"Знайди мене",114 ,90},
    {"Смерть на Нілі", 81 ,110},
    {"Казки для дітей", 40  ,290},
    {"Цікаві вправи для тренування пам'яті",15 ,150} };

    for (int i = 0; i < 9; i++)
    {
        cout << "Назва книги: " << b[i].name << endl;
        cout << "Кількість примірників: " << b[i].count << endl;
        cout << "Ціна: " << b[i].price << " грн" << endl;
    }

    cout << "\n1. Самостійний пошук\n" << "2. Знаходження за інтервалом ціни\n";
    char x = _getch();
    cin >> x;

    if (x == '1')
    {
        cout << "\tПошук книги вручну\n";
        bool e = false;
        char l;
        cout << "Введіть назву книги: ";
        cin >> l;
        for (int i = 0; i < 9; i++)
            if (toupper(b[i].name[0]) == toupper(l))
            {

                cout << "Назва книги: " << setw(30) << b[i].name << "\nКількість примірників: " << setw(10) << b[i].count << "\nЦіна: " << setw(10) << b[i].price << endl;
                e = true;
            }
        if (e == false) cout << "На жаль, такої книжки немає" << endl;
    }

    if (x == '2')
    {
        bool r = false;
        int p, k;
        cout << "\tВведіть інтервал можливої ціни\n" << "Мінімальна ціна: ";
        cin >> p;
        cout << "Максимальна ціна: ";
        cin >> k;
        for (int i = 0; i < 9; i++)
        {
            if(p > b[i].price && k< b[i].price)
                cout << "Назва книги: " << b[i].name << endl << "Ціна: " << b[i].price << " грн" << endl;
            r = true;
        }
        if (r == false) cout << "На жаль, такої книжки немає" << endl;
    }
   system("PAUSE");
   return EXIT_SUCCESS;
}
