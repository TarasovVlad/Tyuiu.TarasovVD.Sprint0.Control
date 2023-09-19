#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.TarasovVD.Sprint0.Control.V1.2.Lib/Tyuiu.TarasovVD.Sprint0.Control.V1.2.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuTarasovVDSprint0ControlV12Test
{
	TEST_CLASS(TyuiuTarasovVDSprint0ControlV12Test)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task8V2* date = new Service2();
			int x=1;
			int y=2;
			int z=3;
			int a;

			a = date->Rezultat(x, y, z);

			Assert::AreEqual(0, a);
		}
	};
}



