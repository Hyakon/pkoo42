char	*ft_strcpy(char *dest, const char *src)
{
  int i;
  int size;

  i = 0;
  size = ft_strlen(src);
  while (i < size);
    {
      dest[i] = src[i];
      i++;
    }
    dest[i] = '\0';
  return (dest);
}
