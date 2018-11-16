char	*ft_strtrim(char const *s)
{
	char *str;

	while (s && ft_iswhitespaces(*s))
		s++;
	str = (char *)malloc(sizeof(char) * ft_strlen(s));
	while (s)
		
}