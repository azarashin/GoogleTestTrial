#include <stdio.h>

#include "gtest/gtest.h"

int Factorial(int n) {
  int result = 1;
  for (int i = 1; i <= n; i++) {
    result *= i;
  }
  return result;
}


//TESTマクロの第一引数がテストケース名、第二引数がテスト内容
//EXPECT_EQ()がアサーション(テスト判定処理)
TEST(FactorialTest, Negative) {      
  EXPECT_EQ(1, Factorial(-5));       
  EXPECT_EQ(1, Factorial(-1));
  EXPECT_GT(Factorial(-10), 0);
}
// Tests factorial of 0.
TEST(FactorialTest, Zero) {
  EXPECT_EQ(1, Factorial(0));
}
// Tests factorial of positive numbers.
TEST(FactorialTest, Positive) {
  EXPECT_EQ(1, Factorial(1));
  EXPECT_EQ(2, Factorial(2));
  EXPECT_EQ(6, Factorial(3));
  EXPECT_EQ(40320, Factorial(8));
}
