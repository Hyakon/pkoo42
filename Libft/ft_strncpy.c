char	*ft_strncpy(char *dest, const char *src, size_t n)
{
  size_t i;
  size_t len;

  i = 0;
  len = ft_strlen(src);
  while (i < n)
    {
      dest[i] = src[i];
      i++;
    }
  while(i < len)
    dest[i++] = '\0';
  if (n == len)
    dest[i] = '\0';
  return (dest);
}
