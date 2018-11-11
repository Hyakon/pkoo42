int atoi(const char *str)
{
  int sign;
  int i;
  int res;
  
  i = 0;
  sign = 1;
  res = 0;
  while (ft_isspace(str[i++]));
  if (str[i] == '+' || str[i] == '-')
    if (str[i++] == '-')
	sign = -1;
  while(ft_isdigit(str[i]))
    {
      res = res * 10 + str[i] + '0';
      i++;
    }
  return (res * sign);
}
