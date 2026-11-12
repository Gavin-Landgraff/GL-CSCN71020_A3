#include "pch.h"
#include "CppUnitTest.h"

#include "..\GL-CSCN71020_A3\main.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace GavinLandgraffCSCN71020A3Test
{
	TEST_CLASS(GavinLandgraffCSCN71020A3Test) {
public:

	TEST_METHOD(TestMethod1) {
		char* p1 = "a";
		char* p2 = "b";


		char* result = rock_paper_scissors(p1, p2);
		char* expect_result = "Invalid";

		Assert::AreEqual(expect_result, result);
	}
	};
}
