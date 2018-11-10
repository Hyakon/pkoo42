#include <string.h>

char   *ft_strncat(char *dest, const char *src, size_t n)
{
  size_t dest_len;
  size_t i;

  dest_len = strlen(dest);
  i = 0;
  while (i < n && src[i] != '\0')
    {
      dest_len[i + dest_len] = src[i;]
      i++;
    }
  dest_len[i + dest_len] = '\0';
  return (dest);
}
