/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_str_is_alpha.c                                   :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/28 13:15:18 by psaudell       #+#    #+#                */
/*   Updated: 2026/06/28 13:38:40 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d\n", ft_str_is_alpha("Bonjour"));
	printf("%d\n", ft_str_is_alpha("Bonjour!"));
	printf("%d\n", ft_str_is_alpha("Bonj1111"));
	printf("%d\n", ft_str_is_alpha(""));
	return (0);
}*/
