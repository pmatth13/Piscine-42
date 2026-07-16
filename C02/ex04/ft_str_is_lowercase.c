/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_str_is_lowercase.c                               :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/28 15:11:01 by psaudell       #+#    #+#                */
/*   Updated: 2026/06/28 15:18:35 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d\n", ft_str_is_lowercase("awertyui"));
	printf("%d\n", ft_str_is_lowercase("awe1554rtyui"));
	printf("%d\n", ft_str_is_lowercase("awWRETDF"));
	printf("%d\n", ft_str_is_lowercase(""));
}*/
