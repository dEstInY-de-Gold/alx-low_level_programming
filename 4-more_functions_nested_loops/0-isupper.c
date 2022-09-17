#include <wctype.h>

/**
 * _isupper - detects upper case characters
 *@c: input argument to function
 *
 *Return: 1 if an upper case letter and 0 if not
 */
int iswctype(wint_t, wctype_t);

int _isupper(int c)
{
	int ch;
	int ret;
	char let;

	ch [26] = (let = 'A', let <= 'Z', let++);
	ret = iswctype(wint_t c, wctype_t ch);

	return (ret);
}
