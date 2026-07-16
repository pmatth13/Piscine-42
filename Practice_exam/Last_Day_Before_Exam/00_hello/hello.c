/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   hello.c                                             :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/16 11:05:39 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/16 11:09:08 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	ft_putstr("Hello World!\n");
	return (0);
}
