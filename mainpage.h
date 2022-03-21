/**
* @mainpage
* Trim String - a simple string operation assignment
*
* @section intoduction Introduction
* A function trim() shall remove all leading and trailing whitespace
* characters. Whitespace characters are space (' ' ), tabulator ('\t'),
* new line ('\n'), and line feed ('\r') charaters.
*
* The function should be implemented in two variants:
* One variant copies a part of a string into another.
* The other variant manipulates the original string without
* creating a copy.
*
* If we consider the string <pre>"   This string can be trimmed  .     "</pre> the
* trimmed version of it would be <pre>"This string can be trimmed  ."</pre>
*
* @section assignment Assignment
* -# Implement the non-copying variant function ` trim()`  such that all unit tests pass.
* -# Implement the copying variant function ` trim_cpy()`  such that all unit tests pass.
* -# Avoid code duplication, functionality that is useful for each variant shall be
* implemented in private(!) functions.
* -# Avoid copying character by character (inefficient), use the appropriate `strcpy` 
* function for this purpose.
* -# Implement the newly created main() function such that it accpets a string
* as command line argument and
*  -# Stage 1: prints the command line arguments via printf().
*  -# Stage 2: copies the command line arguments via strcpy() or sprintf() or
*  character by character (a method you did not use when implementing trim()) into a newly
*  declared character array of length 512.
*  -# Stage 3: calls the function trim() and outputs the result into the `stdout`.
*  -# A 'usage' line shall be printed to `stdout` if the number of actual command line
*  arguments does not match the number of expected arguments.
*/
