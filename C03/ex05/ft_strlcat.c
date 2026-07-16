/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strlcat.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/01 14:39:12 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/01 20:13:38 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count ++;
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	total;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	total = dest_len + src_len;
	if (size <= dest_len)
		return (size + src_len);
	while (src[i] && dest_len < size -1)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (total);
}

/*int	main(void)
{
	char	dest[10] = "123";
	char	src[10] = "456";
	int	size = 6;

	printf("Dest: %s\n", dest);
	printf("strlcat: %d\n", ft_strlcat(dest, src, size));
	printf("Dest after: %s\n", dest);
}*/
