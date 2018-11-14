#include <string.h>

char *ft_strnstr (const char *big, const char *little, size_t len)
{
  int i;
  int j;

  i = 0;
  j = 0;
  if (!little)
    return (NULL);
  while (big[i])
    {
      while (little[j])
	{
	  while (big[i + j] == little[j])
	    j++;
	  if (!little[j])
	    return (&big[i]);
	  else
	    {
	      j = 0;
	      break;
	    }
	}
      i++;
    }
  return (NULL);
}
