#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.VorobevSA.Sprint0.Task5.V0.Lib/Tyuiu.VorobevSA.Sprint0.Task5.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuVorobevSASprint0Task5V0Test0
{
	TEST_CLASS(TyuiuVorobevSASprint0Task5V0Test0)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task2V1* date = new Service();
			float a = 7.5;
			int b = 9;
			int c = 5;
			int d;

			d = date->Summ(a, b, c);

			Assert::AreEqual(337, d);
		}
	};
}
