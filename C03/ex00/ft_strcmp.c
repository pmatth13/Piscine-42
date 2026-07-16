/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strcmp.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/29 14:31:16 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/01 16:21:25 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	printf("%d\n", ft_strcmp("12345", "1234"));
	printf("%d\n", ft_strcmp("1234", "12345"));
	printf("%d\n", ft_strcmp("12345", "12345"));
}*/
