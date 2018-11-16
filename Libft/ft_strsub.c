char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *str;

	str = (char *)malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);
	while(len--)
		str[len] = s[start + len];
	return (str);
}