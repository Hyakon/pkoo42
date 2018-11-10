#include <string.h>

char	*ft_strcat(char *dest, const char *src)
{
  size_t len;
  size_t i;
  size_t j;

  j = 0;
  i = ft_strlen(dest);
  len = i + ft_strlen(src);
  while (i < len)
    {
      dest[i] = src[j++];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
