char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  char		*new;
  unsigned int	i;
  unsigned int	len;

  len = ft_strlen(s);
  new = ft_strnew(len);
  if (new == NULL)
    return (NULL);
  i = 0;
  while (i < len)
    {
      new[i] = f(i,*s);
      i++;
      s++;
    }
  return (new); 
}
