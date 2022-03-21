/*----------------------------------------------------------
 *				HTBLA-Leonding
 * ---------------------------------------------------------
 * Title:			Trim String
 * Author:			S. Schraml
 * ----------------------------------------------------------
 * Description:
 * trim_str test driver.
 * ----------------------------------------------------------
 */
#include <stdio.h>
#include <string.h>

#include "trim.h"

#include "shortcut.h"
#include "test_trim.h"

int main(int argc, char *argv[])
{
	ADD_TEST(empty_string);
	ADD_TEST(empty_string_cpy);
	ADD_TEST(just_string);
	ADD_TEST(just_string_cpy);
	ADD_TEST(leading_space);
	ADD_TEST(leading_space_cpy);
	ADD_TEST(trailing_space);
	ADD_TEST(trailing_space_cpy);
	ADD_TEST(leading_and_trailing_space);
	ADD_TEST(leading_and_trailing_space_cpy);
	ADD_TEST(just_space);
	ADD_TEST(just_space_cpy);
	ADD_TEST(empty_null_string);
	ADD_TEST(empty_null_string_cpy);

	run_tests();
	return 0;
}
