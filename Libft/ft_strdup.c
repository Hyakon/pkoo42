#include <string.h>
#include "libft.h"

char *ft_strdup(const char *s)
{
  int size;
  int i;
  char *str;
  
  size = ft_strlen(s);
  str = (char *)malloc(sizeof(char) * (s + 1));
  if (str == NULL)
    return (str);
  while (i < size)
    {
      str[i] = s[i];
      i++;
    }
  str[i] = '\0';
  return (str);
}
