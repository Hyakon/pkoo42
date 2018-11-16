char *ft_strnew(size_t size)
{
  char *new;

  new = (char *)malloc(sizeof(char) * size);
  if (new == NULL)
    return (NULL);
  while (size--)
    new[size] = '\0';
  new[size] = '\0';
  return (new);
}
