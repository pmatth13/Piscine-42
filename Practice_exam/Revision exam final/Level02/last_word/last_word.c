/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   last_word.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/14 18:21:37 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/14 19:21:46 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 2 || argv[1] == 0)
	{
		int i;

		i = 0;
		while (argv[1][i])
			i++;
		i--;
		while (i >= 0 && is_space(argv[1][i]))
			i--;
		while (i >= 0 && !is_space(argv[1][i]))
			i--;
		i++;
		while (argv[1][i] && !is_space(argv[1][i]))
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}	
