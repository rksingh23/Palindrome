#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>



TEST(Q6_Student, HandlesStraightvalues) {
  CPPLib s;
  std::string str="madam";
  EXPECT_EQ(s.canBePalindrome(str), true);
}

TEST(Q6_Student, HandlesUpperandLowerCase) {
  CPPLib s;
  std::string str="MaDam";
  EXPECT_EQ(s.canBePalindrome(str), true);
}

TEST(Q6_Student, HandlesPermutations) {
  CPPLib s;
  std::string str="AAC";
  EXPECT_EQ(s.canBePalindrome(str), true);
}

TEST(Q6_Student, HandlesNumbers) {
  CPPLib s;
  std::string str="101";
  EXPECT_EQ(s.canBePalindrome(str), true);
}

TEST(Q6_Student, HandlesNumbersandAlphabets) {
  CPPLib s;
  std::string str="101A110";
  EXPECT_EQ(s.canBePalindrome(str), true);
}

TEST(Q6_Student, HandlesPermutationsNumbers) {
  CPPLib s;
  std::string str="110";
  EXPECT_EQ(s.canBePalindrome(str), true);
}

//Negative Test

TEST(Q6_Student, FailsforSingleAlphabet) {
  CPPLib s;
  std::string str="A";
  EXPECT_EQ(s.canBePalindrome(str), false);
}

TEST(Q6_Student, fail) {
  CPPLib s;
  std::string str="london";
  EXPECT_EQ(s.canBePalindrome(str), false);
}