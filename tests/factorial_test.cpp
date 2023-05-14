#include "../src/factorial.hpp"

#include <gtest/gtest.h>

TEST(FactorialTests, Zero) { ASSERT_EQ(1, factorial(0)); }

TEST(MultiplyTests, One) { ASSERT_EQ(1, factorial(1)); }

TEST(MultiplyTests, Integer) { ASSERT_EQ(120, factorial(5)); }

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}