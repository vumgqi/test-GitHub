#include <stdio.h>
char *strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return dest;
}

int _strlen(char *str)
{
	int i = 0;
	while (*str++ && ++i);
	return i;
}

char *_strcpy(char *dest, const char *src)
{
	char *p = dest;
	while (*dest++ = *src++);
	return p;
}

int main(int argc, char *argv[])
{
	char *s1 = "hello world";
	char p[16] = "1";
	printf("%s\n", _strcpy(p, s1));
	return 0;
}
