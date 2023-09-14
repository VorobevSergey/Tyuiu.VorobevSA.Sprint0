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
			ISprint0Task7* service4 = new Service4();
			int q = 45555557;
			int w = 69999997;
			char a, b;
			a = service4->Rezalt(q);
			b = service4->Rezalt(w);

		};
	};
}