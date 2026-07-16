/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_str_is_numeric.c                                 :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/28 13:39:37 by psaudell       #+#    #+#                */
/*   Updated: 2026/06/28 13:49:35 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d\n", ft_str_is_numeric("01230123584857"));
	printf("%d\n", ft_str_is_numeric("abbyguegfu"));
	printf("%d\n", ft_str_is_numeric("1jhbeijh4857"));
	printf("%d\n", ft_str_is_numeric("&^%$%^&"));
	printf("%d\n", ft_str_is_numeric(""));
	return(0);
}*/
