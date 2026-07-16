/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   last_word.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/13 14:09:58 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/13 17:40:23 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	main(int argc, char **argv)
{		
	if (argc == 2)
	{
		int	i;
		int	j;

		i = 0;
		while (argv[1][i])
			i++;
		j = i - 1;
		while (j > 0 && is_space(argv[1][j]))
			j--;
		while (j > 0 && !is_space(argv[1][j]))
			j--;
		j++;
		while (j <= i)
		{
			write(1, &argv[1][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
