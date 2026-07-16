/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_atoi.c                                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/12 13:19:16 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/12 13:28:40 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int sign;
	int	result;

	i = 0;
	result = 0;
	sign = 1;

	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

int	main(void)
{
	printf("%d\n", ft_atoi("  	---1245"));
	printf("%d\n", ft_atoi("    -1245"));
	printf("%d\n", ft_atoi("    12a45"));
}
