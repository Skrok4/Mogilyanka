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
    cout << "\t***������� ������� �� ���� �������� ���������***\n";
    Books b[9] = { {"���, � ����� ����", 200, 160.5 },
    {"������ ������", 920 , 230},
    {"������, �� ����� ���� ��������",30 ,120},
    {"������� �����",169 ,135},
    {"������� � ���� ����",78 ,95},
    {"������ ����",114 ,90},
    {"������ �� ͳ�", 81 ,110},
    {"����� ��� ����", 40  ,290},
    {"ֳ��� ������ ��� ���������� ���'��",15 ,150} };

    for (int i = 0; i < 9; i++)
    {
        cout << "����� �����: " << b[i].name << endl;
        cout << "ʳ������ ���������: " << b[i].count << endl;
        cout << "ֳ��: " << b[i].price << " ���" << endl;
    }

    cout << "\n1. ���������� �����\n" << "2. ����������� �� ���������� ����\n";
    char x = _getch();
    cin >> x;

    if (x == '1')
    {
        cout << "\t����� ����� ������\n";
        bool e = false;
        char l;
        cout << "������ ����� �����: ";
        cin >> l;
        for (int i = 0; i < 9; i++)
            if (toupper(b[i].name[0]) == toupper(l))
            {

                cout << "����� �����: " << setw(30) << b[i].name << "\nʳ������ ���������: " << setw(10) << b[i].count << "\nֳ��: " << setw(10) << b[i].price << endl;
                e = true;
            }
        if (e == false) cout << "�� ����, ���� ������ ����" << endl;
    }

    if (x == '2')
    {
        bool r = false;
        int p, k;
        cout << "\t������ �������� ������� ����\n" << "̳������� ����: ";
        cin >> p;
        cout << "����������� ����: ";
        cin >> k;
        for (int i = 0; i < 9; i++)
        {
            if(p > b[i].price && k< b[i].price)
                cout << "����� �����: " << b[i].name << endl << "ֳ��: " << b[i].price << " ���" << endl;
            r = true;
        }
        if (r == false) cout << "�� ����, ���� ������ ����" << endl;
    }
   system("PAUSE");
   return EXIT_SUCCESS;
}
