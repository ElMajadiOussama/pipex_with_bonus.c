#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	j;
	size_t	str_len;

	if (!s)
		return (NULL);
	if (len >= ft_strlen(s))
		str_len = ft_strlen(s);
	else
		str_len = len;
	substr = malloc (sizeof(char) * (str_len + 1));
	if (!substr)
		exit (EXIT_FAILURE);
	i = ((size_t)start);
	j = 0;
	while (i < ft_strlen(s) && j < len)
	{
		substr[j] = s[i];
		i++;
		j++;
	}
	substr[j] = '\0';
	return (substr);
}

// #include <stdio.h>
// int main()
// {
// 	char str[20] = "This is string";
// 	char *result = ft_substr(str, 0, 18);
// 	printf("The  result is: |%s|\n", result);
// 	return 0;
// }
