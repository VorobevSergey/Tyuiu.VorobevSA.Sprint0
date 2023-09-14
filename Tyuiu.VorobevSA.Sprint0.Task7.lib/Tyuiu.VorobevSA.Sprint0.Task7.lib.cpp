// Tyuiu.VorobevSA.Sprint0.Task7.lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"
#include <string>
using namespace std;

// TODO: This is an example of a library function
class Service1 : public ISprint0Task7
{

    virtual float Rezalt(int a) override
    {
        int c = a; // Делаем число целым
        string s = to_string(c); // Переводим число в строку
        int b = s.length(); // считываем кол-во символов
        if (b == 3)
        {
            return true;
        }
        else
        {
            return false;
        }
    };
};

class Service2 : public ISprint0Task7
{

    virtual float Rezalt(int a) override
    {
        int c = a; // Делаем число целым
        string s = to_string(c); // Переводим число в строку
        int b = s.length(); // считываем кол-во символов
        if (b == 4)
        {
            return true;
        }
        else
        {
            return false;
        }
    };
};

class Service3 : public ISprint0Task7
{

    virtual float Rezalt(int a) override
    {
        int c = a; // Делаем число целым
        string s = to_string(c); // Переводим число в строку
        int b = s.length(); // считываем кол-во символов
        if (b == 5)
        {
            return true;
        }
        else
        {
            return false;
        }
    };
};

class Service4 : public ISprint0Task7
{

    virtual float Rezalt(int a) override
    {
        int c = a; // Делаем число целым
        string s = to_string(c); // Переводим число в строку
        int b = s.length(); // считываем кол-во символов
        if (b == 6)
        {
            return true;
        }
        else
        {
            return false;
        }
    };
};

class Service5 : public ISprint0Task7
{

    virtual float Rezalt(int a) override
    {
        int c = a; // Делаем число целым
        string s = to_string(c); // Переводим число в строку
        int b = s.length(); // считываем кол-во символов
        if (b == 7)
        {
            return true;
        }
        else
        {
            return false;
        }
    };
};