
#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06_3.rec/Lab_06_3.rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63rec
{
	TEST_CLASS(UnitTest63rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
		
			int m[3] = { 1, 2, 3 };

			Inverse(m, 3, 0);

			Assert::AreEqual(m[0], 3); 
		}
	};
}
