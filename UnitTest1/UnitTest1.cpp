#include "pch.h"
#include "CppUnitTest.h"
#include "../lab7.1/FileName.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			std::vector<int> testVector = { 5, 8, 2, 10, 3 };
			int expectedSumIndices = 2 + 3; 

			int actualSumIndices = sumMinMaxIndices(testVector);

			Assert::AreEqual(expectedSumIndices, actualSumIndices);
		}
	};
}
