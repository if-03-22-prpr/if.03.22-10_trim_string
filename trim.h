/*----------------------------------------------------------
 *				HTBLA-Leonding
 * ---------------------------------------------------------
 * Title:			Trim String
 * Author:			S. Schraml
 * ----------------------------------------------------------
 * Description:
 * Implementation of 'trim' functionality.
 * ----------------------------------------------------------
 */

#ifndef ___TRIM_H
#define ___TRIM_H

/**
* Provides the trimmed string WITHOUT making a copy 
* of the source string.
* Trimming means that leading and trailing whitespace 
* characters are removed.
*
* Whitespace characters are:
* - space (' '),
* - tabulator ('\t')
* - new line ('\n')
* - line feed ('\r')
* @param string The string to be trimmed.
* @return The trimmed string.
*/
char* trim(char* string);

/**
* Provides the trimmed string as COPY of the source string.
* Trimming means that leading and trailing whitespace 
* characters are removed.
*
* Whitespace characters are:
* - space (' '),
* - tabulator ('\t')
* - new line ('\n')
* - line feed ('\r')
* @param string The string to be trimmed.
* @param trimmed_string Container which takes the trimmed
* version of source. This function expects a buffer that
* is large enough for carrying the trimmed string.
*/
void trim_cpy(char* string, char* trimmed_string);

#endif

