#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.VorobevSA.Sprint0.Task6.Lib/Tyuiu.VorobevSA.Sprint0.Task6.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuVorobevSASprint0Task6V1Test
{
	TEST_CLASS(TyuiuVorobevSASprint0Task6V1Test)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task6* servise4 = new Servise3();
			float x, y;
			x = 5;
			y = 20;
			int a;
			a = servise4->Calculate(x, y);
		};
	};
}