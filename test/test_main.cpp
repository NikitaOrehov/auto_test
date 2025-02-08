#include <gtest/gtest.h>
#include "Vector.h"
#include <iostream>
//
////int argc, char** argv
//

int main(int argc, char** argv)
{
	std::cout << "test123\n";
	Vector a(3);
	Vector b(3);
	Vector c = a + b;
	std::cout << "test_main\n";
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}