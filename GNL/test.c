#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *s;

	s = (char *)malloc(sizeof(char) * 10);
	if (s == NULL)
		return (1);
	s[0] = 'b';
	if (*s)
		printf("111Je suis nuLL");
	else
		printf("111fuckkk");
	free(s);
	if (*s)
		printf("222Je suis nuLL");
	else
		printf("222fuckkk");
	return (1);
}
