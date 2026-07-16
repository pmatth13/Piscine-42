/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strncpy.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/28 13:12:34 by psaudell       #+#    #+#                */
/*   Updated: 2026/06/28 13:14:00 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char b[] = "maison";
	char a[100] = "a";
	int size;

	
	size = 7;
	printf("a = %s. \n", a);
	printf("b = %s.\n\n", b);
	ft_strncpy(a, b, size);
	printf("a = %s. \n", a);
	printf("b = %s.", b);
	return (0);
}*/
