#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.VorobevSA.Sprint0.Task5.V0.Lib/Tyuiu.VorobevSA.Sprint0.Task5.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuVorobevSASprint0Task5V2Test
{
	TEST_CLASS(TyuiuVorobevSASprint0Task5V2Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task5* date = new Servise2();
			float a = 5.45;
			float b = 2.5;
			float c = 3.0;
			int d;

			d = date->Zadacha(a,b,c);

			Assert::AreEqual(10, d);
		}
	};
}
