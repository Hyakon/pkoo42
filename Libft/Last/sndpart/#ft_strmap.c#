char *ft_strmap(char *s, char (*f)(char))
{
  char *new;
  int i;
  int len;

  len = ft_strlen(s);
  new = ft_strnew(len);
  if (new == NULL)
    return (NULL);
  i = 0;
  while (i < len)
    {
      new[i] = f(*s);
      i++;
      s++;
    }
  return (new);
}
