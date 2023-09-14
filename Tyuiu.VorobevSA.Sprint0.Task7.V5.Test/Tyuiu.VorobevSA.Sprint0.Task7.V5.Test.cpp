#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.VorobevSA.Sprint0.Task7.lib/Tyuiu.VorobevSA.Sprint0.Task7.lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuVorobevSASprint0Task7V1Test
{
	TEST_CLASS(TyuiuVorobevSASprint0Task7V1Test)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task7* service5 = new Service5();
			int q = 45555558;
			int w = 69999996;
			char a, b;
			a = service5->Rezalt(q);
			b = service5->Rezalt(w);

		};
	};
}