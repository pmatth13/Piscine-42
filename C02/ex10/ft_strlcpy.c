/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strlcpy.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/28 17:16:20 by psaudell       #+#    #+#                */
/*   Updated: 2026/06/28 17:51:05 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	if (size == 0)
		return (len);
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

/*int	main(void)
{
	char dest[20];
	char src[] = "Bonjour";
	unsigned int count;

	//size ok :
	count = ft_strlcpy(dest, src, 20);
	printf("%s\n", dest);
	printf("%u\n", count);

	//size < src:
	count = ft_strlcpy(dest, src, 4);
	printf("%s\n", dest);
	printf("%u\n", count);
	
	//size = 0
	count = ft_strlcpy(dest, src, 0);
	printf("%s\n", dest);
	printf("%u\n", count);
}*/
