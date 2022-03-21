/*----------------------------------------------------------
 *				HTBLA-Leonding
 * ---------------------------------------------------------
 * Title:			Trim String
 * Author:			S. Schraml
 * ----------------------------------------------------------
 * Description:
 * Test functions for 'trim'.
 * ----------------------------------------------------------
 */
#include <string.h>

#include "shortcut.h"
#include "trim.h"
#include "test_trim.h"

#define MAX_STR_LEN 48

/**
 * empty_substring: tests that trimming an empty string yields an empty string.
 */
TEST(empty_null_string) {
	char* trimmed = trim(0);
	ASSERT_EQUALS(0l, (long)trimmed);
}

/**
 * empty_substring: tests that trimming an empty string yields an empty string.
 */
TEST(empty_null_string_cpy) {
	char str[MAX_STR_LEN] = "";
	trim_cpy(str, 0);

	char trimmed[MAX_STR_LEN] = "no content";
	trim_cpy(0, trimmed);
	ASSERT_EQUALS_STR(trimmed, trimmed, "");
}

/**
 * empty_substring: tests that trimming an empty string yields an empty string.
 */
TEST(empty_string) {
	char str[MAX_STR_LEN] = "";
	char* trimmed = trim(str);
	ASSERT_EQUALS((long)str, (long)trimmed);
	ASSERT_EQUALS_STR("", trimmed, "");
}

/**
 * empty_substring: tests that trimming an empty string yields an empty string.
 */
TEST(empty_string_cpy) {
	char str[MAX_STR_LEN] = "";
	char trimmed[MAX_STR_LEN] = "no content";

	trim_cpy(str, trimmed);
	ASSERT_EQUALS_STR("", trimmed, "");
}

/**
 * just_string
 */
TEST(just_string) {
	char str[MAX_STR_LEN] = "How cool is this?!";
	char* trimmed = trim(str);
	ASSERT_EQUALS((long)str, (long)trimmed);
	ASSERT_EQUALS_STR(str, trimmed, "");
}

/**
 * just_string
 */
TEST(just_string_cpy) {
	char str[MAX_STR_LEN] = "How cool is this?!";
	char trimmed[MAX_STR_LEN] = "no content";

	trim_cpy(str, trimmed);
	ASSERT_EQUALS_STR(str, trimmed, "");
}

/**
 * leading_space
 */
TEST(leading_space) {
	char str[MAX_STR_LEN] = "  \t  A lot of space ahead";
	char* trimmed = trim(str);
	ASSERT_EQUALS_STR("A lot of space ahead", trimmed, "");
}

/**
 * leading_space
 */
TEST(leading_space_cpy) {
	char str[MAX_STR_LEN] = "  \t  A lot of space ahead";
	char trimmed[MAX_STR_LEN] = "no content";

	trim_cpy(str, trimmed);
	ASSERT_EQUALS_STR("A lot of space ahead", trimmed, "");
}
/**
 * trailing_space
 */
TEST(trailing_space) {
	char str[MAX_STR_LEN] = "After all just emptyness  \n  ";
	char* trimmed = trim(str);
	ASSERT_EQUALS((long)str, (long)trimmed);
	ASSERT_EQUALS_STR("After all just emptyness", trimmed, "");
}

/**
 * trailing_space
 */
TEST(trailing_space_cpy) {
	char str[MAX_STR_LEN] = "After all just emptyness  \n  ";
	char trimmed[MAX_STR_LEN] = "no content";

	trim_cpy(str, trimmed);
	ASSERT_EQUALS_STR("After all just emptyness", trimmed, "");
}

/**
 * leading_and_trailing_space
 */
TEST(leading_and_trailing_space) {
	char str[MAX_STR_LEN] = "  A lot of space around. \r ";
	char* trimmed = trim(str);
	ASSERT_EQUALS_STR("A lot of space around.", trimmed, "");
}

/**
 * leading_and_trailing_space
 */
TEST(leading_and_trailing_space_cpy) {
	char str[MAX_STR_LEN] = "  A lot of space around. \r ";
	char trimmed[MAX_STR_LEN] = "no content";

	trim_cpy(str, trimmed);
	ASSERT_EQUALS_STR("A lot of space around.", trimmed, "");
}

/**
 * just_blanks
 */
TEST(just_space) {
	char str[MAX_STR_LEN] = "\t \r \n ";
	char* trimmed = trim(str);
	ASSERT_EQUALS_STR("", trimmed, "");
}

/**
 * just_blanks
 */
TEST(just_space_cpy) {
	char str[MAX_STR_LEN] = "\t \r \n ";
	char trimmed[MAX_STR_LEN] = "no content";

	trim_cpy(str, trimmed);
	ASSERT_EQUALS_STR("", trimmed, "");
}
