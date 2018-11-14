#include <string.h>
#include "libft.h"

char	*st_strchr(const char *s, int c)
{
  while (*s)
    {
      if (*s == c)
	return (s);
      s++;
    }
  if (*s == c)
    return (s);
  return (NULL);
}
