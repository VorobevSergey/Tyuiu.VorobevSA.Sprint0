// Tyuiu.VorobevSA.Sprint0.Task5.V0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"../Tyuiu.VorobevSA.Sprint0.Task5.V0.Lib/Tyuiu.VorobevSA.Sprint0.Task5.V0.Lib.cpp"

int main()
{
    ISprint0Task2V1* service = new Service();
    std::cout << "Vorobev\a\t" << "Sergey\t" << "Aleksandrovich\n";
    std::cout << std::endl;
    std::cout << "Task5.V0\n";
    std::cout << "Result 7.5*9*5= " << service->Summ(7.5, 9, 5);

    std::cout << "\n" << std::endl;

    ISprint0Task5* service1 = new Service1();
    std::cout << "Task5.V1\n";
    std::cout << "Result (2.85+0.5)*7= " << service1->Zadacha(2.85, 0.5, 7);

    std::cout << "\n" << std::endl;

    ISprint0Task5* servise2 = new Servise2();
    std::cout << "Task5.V2\n";
    std::cout << "Result 5.45+2.5+3= " << servise2->Zadacha(5.45, 2.5, 3);

    std::cout << "\n" << std::endl;

    ISprint0Task5* servise3 = new Servise3();
    std::cout << "Task5.V3\n";
    std::cout << "Result:" << servise3->Zadacha(67, 8.5, 6.5);

    std::cout << "\n" << std::endl;

    ISprint0Task2V2* servise4 = new Servise4();
    std::cout << "Task5.V4\n";
    std::cout << "Result:(4+5+6)+((4+5)/2)= " << servise4->SummV2(4, 5, 6);
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
