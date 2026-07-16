/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strncat.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/29 18:09:01 by psaudell       #+#    #+#                */
/*   Updated: 2026/06/29 18:30:36 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i] && i < nb)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	mot1[100] = "Hello";
	char	mot2[100] = "Bonjour";
	printf("%s\n", ft_strncat(mot1, mot2, 2));
	printf("%s\n", ft_strncat(mot1, mot2, 100)); 
}*/
