/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   aff_last_param.c                                    :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/08 13:08:55 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/08 13:18:43 by psaudell       ########   odam.nl        */
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

int	main(int argc, char **argv)
{
	if (argc == 1)
		write(1, "\n", 1);
	if (argc >= 2)
	ft_putstr(argv[argc - 1]);
}
