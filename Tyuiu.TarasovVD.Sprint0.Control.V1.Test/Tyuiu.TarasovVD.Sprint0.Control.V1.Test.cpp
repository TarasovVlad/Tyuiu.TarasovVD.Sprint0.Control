#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.TarasovVD.Sprint0.Control.V1.Lib/Tyuiu.TarasovVD.Sprint0.Control.V1.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuTarasovVDSprint0ControlV1Test
{
	TEST_CLASS(TyuiuTarasovVDSprint0ControlV1Test)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task8V0* date = new Service1();
			int a = 900;
			int e = 0;

			e = date->Control(a);

			Assert::AreEqual(0, e);
		}
	};
}






