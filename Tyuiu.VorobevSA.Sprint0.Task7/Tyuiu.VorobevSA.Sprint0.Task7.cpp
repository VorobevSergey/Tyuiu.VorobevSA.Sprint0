// Tyuiu.VorobevSA.Sprint0.Task7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.VorobevSA.Sprint0.Task7.lib/Tyuiu.VorobevSA.Sprint0.Task7.lib.cpp"
#include <math.h>
#include <string>

int main()
{
    {
        setlocale(LC_ALL, "RUSSIAN");
        cout << "Vorobev\a\t" << "Sergey\t" << "Aleksandrovich\n";
        ISprint0Task7* service1 = new Service1();
        cout << "Task7.V1\n";
        int x, n;
        cout << "������� ��� ������� �����: ";
        cin >> x;
        if (service1->Rezalt(x) == true)
        {
            cout << "������� ����� �� ��������: ";
            cin >> n;
            string sn = to_string(n);
            string sx = to_string(x);
            if (sx.find(sn) < 9)
            {
                cout << "� ����� " + sx + " ���� ����� " + sn + ".\n";
            }
            else
            {
                cout << "� ����� " + sx + " ��� ����� " + sn + ".\n";
            }
        }
        else
        {
            cout << "����� " + to_string(x) + " �� �����������.\n";
        }
        cout << "\n" << endl;
    };

    {
        ISprint0Task7* service2 = new Service2();
        cout << "Task7.V2\n";
        int x, n;
        cout << "������� ������ ������� �����: ";
        cin >> x;
        if (service2->Rezalt(x) == true)
        {
            cout << "������� ����� �� ��������: ";
            cin >> n;
            string sx = to_string(x);
            string sn = to_string(n);
            if (sx.find(sn) < 9)
            {
                cout << "� ����� " + sx + " ���� ����� " + sn + ".\n";
            }
            else
            {
                cout << "� ����� " + sx + " ��� ����� " + sn + ".\n";
            }
        }
        else
        {
            cout << "����� " + to_string(x) + " �� ������ ������� �����.\n";
        }
        cout << "\n" << endl;
    };
    {ISprint0Task7* service3 = new Service3();
    cout << "Task7.V3\n";
    int x, n;
    cout << "������� ���� ������� �����: ";
    cin >> x;
    if (service3->Rezalt(x) == true)
    {
        cout << "������� ����� �� ��������: ";
        cin >> n;
        string sx = to_string(x);
        string sn = to_string(n);
        if (sx.find(sn) < 9)
        {
            cout << "� ����� " + sx + " ���� ����� " + sn + ".\n";
        }
        else
        {
            cout << "� ����� " + sx + " ��� ����� " + sn + ".\n";
        }
    }
    else
    {
        cout << "����� " + to_string(x) + " �� ���� ������� �����.\n";
    }
    cout << "\n" << endl;
    };
    {ISprint0Task7* service4 = new Service4();
    cout << "Task7.V4\n";
    int x, n;
    cout << "������� ����� ������� �����: ";
    cin >> x;
    if (service4->Rezalt(x) == true)
    {
        cout << "������� ����� �� ��������: ";
        cin >> n;
        string sn = to_string(n);
        string sx = to_string(x);
        if (sx.find(sn) < 9)
        {
            cout << "� ����� " + sx + " ���� ����� " + sn + ".\n";
        }
        else
        {
            cout << "� ����� " + sx + " ��� ����� " + sn + ".\n";
        }
    }
    else
    {
        cout << "����� " + to_string(x) + " �� ����� ������� �����.\n";
    }
    cout << "\n" << endl;
    };

    {ISprint0Task7* service5 = new Service5();
    cout << "Task7.V5\n";
    int x, n;
    cout << "������� ���� ������� �����: ";
    cin >> x;
    if (service5->Rezalt(x) == true)
    {
        cout << "������� ����� �� ��������: ";
        cin >> n;
        string sx = to_string(x);
        string sn = to_string(n);
        if (sx.find(sn) < 9)
        {
            cout << "� ����� " + sx + " ���� ����� " + sn + ".\n";
        }
        else
        {
            cout << "� ����� " + sx + " ��� ����� " + sn + ".\n";
        }
    }
    else
    {
        cout << "����� " + to_string(x) + " �� ���� ������� �����.\n";
    }
    cout << "\n" << endl;
    };
};

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
