/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //constructor runs before each test
		virtual ~PasswordTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

// count_leading_characters tests

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
}

TEST(PasswordTest, multiple_leading_letters)
{
	Password my_password;
	ASSERT_EQ(2, my_password.count_leading_characters("aab"));
}

TEST(PasswordTest, single_leading_letters)
{
	Password my_password;
	ASSERT_EQ(1, my_password.count_leading_characters("abb"));
}

TEST(PasswordTest, empty_into_count_leading)
{
	Password my_password;
	ASSERT_EQ(1, my_password.count_leading_characters(""));
}

// has_mixed_case tests

TEST(PasswordTest, is_mixed) {
	Password my_password;
	ASSERT_EQ(true, my_password.has_mixed_case("aB"));
}

TEST(PasswordTest, isnt_mixed) {
	Password my_password;
	ASSERT_EQ(false, my_password.has_mixed_case("ab"));
}

TEST(PasswordTest, empty_into_mixed_case) {
	Password my_password;
	ASSERT_EQ(false, my_password.has_mixed_case(""));
}

TEST(PasswordTest, single_char) {
	Password my_password;
	ASSERT_EQ(false, my_password.has_mixed_case("a"));
}

// unique_characters tests

TEST(PasswordTest, single_char) {
	Password my_password;
	ASSERT_EQ(false, my_password.unique_characters(""));
}

TEST(PasswordTest, single_char) {
	Password my_password;
	ASSERT_EQ(false, my_password.unique_characters(""));
}

TEST(PasswordTest, single_char) {
	Password my_password;
	ASSERT_EQ(false, my_password.unique_characters(""));
}