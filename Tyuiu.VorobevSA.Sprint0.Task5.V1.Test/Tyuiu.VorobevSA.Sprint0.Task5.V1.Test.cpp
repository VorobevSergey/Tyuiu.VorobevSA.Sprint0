#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.VorobevSA.Sprint0.Task5.V0.Lib/Tyuiu.VorobevSA.Sprint0.Task5.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuVorobevSASprint0Task5V1Test
{
	TEST_CLASS(TyuiuVorobevSASprint0Task5V1Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task5* date = new Service1();
			float a = 2.75;
			float b = 0.5;
			float c = 7;
			int d;

			d = date->Zadacha(a, b, c);

			Assert::AreEqual(22, d);
		}
	};
}
