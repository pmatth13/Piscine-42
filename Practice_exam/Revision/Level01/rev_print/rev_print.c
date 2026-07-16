/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   rev_print.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/09 16:30:20 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/09 16:47:38 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int i;

	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		i = ft_strlen(argv[1]) - 1;
		while (i >= 0)
		{
			write(1, &argv[1][i], 1);
			i--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
