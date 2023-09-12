#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.VorobevSA.Sprint0.Task5.V0.Lib/Tyuiu.VorobevSA.Sprint0.Task5.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuVorobevSASprint0Task5V3Test
{
	TEST_CLASS(TyuiuVorobevSASprint0Task5V3Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task5* date = new Servise3();
			float a = 67;
			float b = 8.5;
			float c = 6.5;
			int d;

			d = date->Zadacha(a, b, c);

			Assert::AreEqual(74, d);
		}
	};
}
