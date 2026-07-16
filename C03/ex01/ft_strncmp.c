/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strncmp.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/29 15:34:24 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/01 16:30:10 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	printf("%d\n", ft_strncmp("1234", "1234", 4));
	printf("%d\n", ft_strncmp("1234", "1234", 3));
	printf("%d\n", ft_strncmp("1234", "15234", 2));
	printf("%d\n", ft_strncmp("12345", "1234", 5));
	printf("%d\n", ft_strncmp("123", "1234", 4));
}*/
