/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   last_word.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/16 16:14:44 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/16 16:26:18 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	if ((c >= 9 && c<= 13) || c == 32)
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 2)
	{
		while (argv[1][i])
			i++;
		i = i - 1;
		while (i > 0 && is_space(argv[1][i]))
			i--;
		while (i > 0 && !is_space(argv[1][i - 1]))
			i--;
		while (argv[1][i] && !is_space(argv[1][i]))
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
