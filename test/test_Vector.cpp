#include "Vector.h"
#include "gtest/gtest.h"
#include <random>

TEST(GroupZero, Test1) {
	EXPECT_EQ(1, 1);
}

TEST(Constructor_size, EXCEPT) {
	ASSERT_ANY_THROW(Vector(0));
	EXPECT_THROW(Vector(0), std::invalid_argument);
}

TEST(Constructor_size, NO_EXCEPT) {
	int size = rand();
	EXPECT_NO_THROW(Vector(size));
}

TEST(Constructor_size, all_zero) {
	Vector a(10);
	for (int i = 0; i < 10; i++) {
		ASSERT_EQ(a[i], 0);
	}
	EXPECT_TRUE(true);
}

TEST(Vector_plus, EXPECT) {
	Vector a(3);
	Vector b(4);
	ASSERT_ANY_THROW(a + b);
	EXPECT_THROW(a + b, std::invalid_argument);
}

TEST(Vector_plus, NO_EXPECT) {
	Vector a(3);
	Vector b(3);
	EXPECT_NO_THROW(a + b);
}

TEST(Vector_plus, PLUS1) {
	Vector a(3);
	Vector b(3);
	Vector c = a + b;
	for (int i = 0; i < 3; i++) {
		ASSERT_EQ(c[i], 0);
	}
}

TEST(Vector_plus, PLUS2) {
	size_t size = 10;
	Vector a(size);
	for (int i = 0; i < size; i++) {
		a[i] = i;
	}
	Vector b(size);
	for (int i = 0; i < size; i++) {
		b[i] = i;
	}
	Vector c = a + b;
	for (int i = 0; i < 3; i++) {
		ASSERT_EQ(c[i], i + i);
	}
}

TEST(Vector_at, EXPECT) {
	Vector a(3);
	ASSERT_ANY_THROW(a.at(5));
	ASSERT_ANY_THROW(a.at(3));
	ASSERT_ANY_THROW(a.at(-1));
	EXPECT_THROW(a.at(-1), std::out_of_range);
}