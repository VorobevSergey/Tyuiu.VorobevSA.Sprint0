// Tyuiu.VorobevSA.Sprint0.Task6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.VorobevSA.Sprint0.Task6.Lib/Tyuiu.VorobevSA.Sprint0.Task6.Lib.cpp"

using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    std::cout << "Vorobev\a\t" << "Sergey\t" << "Aleksandrovich\n";
    std::cout << std::endl;
    ISprint0Task6* servise = new Servise();
    std::cout << "Task5.V1\n";
    float x, y;
    cin >> x;
    cin >> y;
    cout << endl;
    cout << "Rezultato=" << servise->Calculate(x, y);
    cout << endl;
    cout << endl;

    std::cout << "\n";

    ISprint0Task6* servise1 = new Servise1();
    std::cout << "Task5.V2\n";
    cin >> x;
    cin >> y;
    cout << endl;
    cout << "Rezultato=" << servise1->Calculate(x, y);
    cout << endl;
    cout << endl;

    std::cout << "\n";

    ISprint0Task6* servise2 = new Servise2();
    std::cout << "Task5.V3\n";
    cin >> x;
    cin >> y;
    cout << endl;
    cout << "Rezultato=" << servise2->Calculate(x, y);
    cout << endl;
    cout << endl;

    std::cout << "\n";

    ISprint0Task6* servise3 = new Servise3();
    std::cout << "Task5.V4\n";
    cin >> x;
    cin >> y;
    cout << endl;
    cout << "Rezultato=" << servise3->Calculate(x, y);
    cout << endl;
    cout << endl;

    std::cout << "\n";

    ISprint0Task6* servise4 = new Servise4();
    std::cout << "Task5.V5\n";
    cin >> x;
    cin >> y;
    cout << endl;
    cout << "Rezultato=" << servise4->Calculate(x, y);
    cout << endl;
    cout << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
