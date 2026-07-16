/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   search_and_replace.c                                :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/08 16:57:16 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/08 18:12:28 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 4 )
		write(1, "\n", 1);
	while (*argv[1])
	{
		if (*argv[1] == *argv[2])
			ft_putstr(argv[3]);
		else
			write(1, argv[1], 1);
		argv[1]++;
	}
}
