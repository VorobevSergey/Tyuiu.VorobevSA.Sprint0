#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.VorobevSA.Sprint0.Task5.V0.Lib/Tyuiu.VorobevSA.Sprint0.Task5.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuVorobevSASprint0Task5V4Test
{
	TEST_CLASS(TyuiuVorobevSASprint0Task5V4Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task2V2* date = new Servise4();
			int a = 4;
			int b = 5;
			int c = 6;
			int d;

			d = date->SummV2(a, b, c);

			Assert::AreEqual(19, d);
		}
	};
}
