void *ft_memalloc(size_t size)
{
  void *tmp;

  tmp = malloc(sizeof(tmp));
  if (tmp == NULL)
    return (NULL);
  tmp = 0;
  return (tmp);
}
