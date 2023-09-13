// Tyuiu.VorobevSA.Sprint0.Task6.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class Servise : public ISprint0Task6
{
	//Inherited via ISprint0Task6
	virtual int Calculate(float a, int b) override
	{
		return a / 3 / b + 6;

	};
};

class Servise1 : public ISprint0Task6
{
	//Inherited via ISprint0Task6
	virtual int Calculate(float a, int b) override
	{
		return a * b / (5 + a) + 6;

	};
};

class Servise2 : public ISprint0Task6
{
	//Inherited via ISprint0Task6
	virtual int Calculate(float a, int b) override
	{
		return (5 + (a * b / 3));

	};
};

class Servise3 : public ISprint0Task6
{
	//Inherited via ISprint0Task6
	virtual int Calculate(float a, int b) override
	{
		return (5 * a) / (7 + b);

	};
};

class Servise4 : public ISprint0Task6
{
	//Inherited via ISprint0Task6
	virtual int Calculate(float a, int b) override
	{
		return (a * 8) / b * 2;

	};
};
