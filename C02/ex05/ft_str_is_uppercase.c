/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_str_is_uppercase.c                               :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/28 15:20:16 by psaudell       #+#    #+#                */
/*   Updated: 2026/06/28 15:25:12 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d\n", ft_str_is_uppercase("QWRDGH"));
	printf("%d\n", ft_str_is_uppercase("aweOtyui"));
	printf("%d\n", ft_str_is_uppercase("a615tyui"));
	printf("%d\n", ft_str_is_uppercase("awertyui"));
	return (0);
}*/
