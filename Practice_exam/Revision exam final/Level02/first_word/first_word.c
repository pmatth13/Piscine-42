/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   first_word.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/14 15:25:24 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/14 16:01:23 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_whitespace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2 || argv[1] == 0)
		write (1, "\n", 1);
	else
	{
		while (argv[1][i] && is_whitespace(argv[1][i]))
			i++;
		while (argv[1][i] && !is_whitespace(argv[1][i]))
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}		

