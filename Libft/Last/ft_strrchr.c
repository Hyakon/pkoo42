#include <string.h>
#include "libft.h"

char	*strrchr(const char *s, int c)
{
  size_t len;

  len = ft_strlen(s);
  while (len--)
    {
      if (s[len] == c)
	return (&s[len]);
    }
  return (NULL);
}
