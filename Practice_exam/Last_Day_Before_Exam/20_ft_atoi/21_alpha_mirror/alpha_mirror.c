/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   alpha_mirror.c                                      :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/16 17:18:52 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/16 18:06:51 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	char c;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			c = argv[1][i];
			if (c >= 'a' && c <= 'z')
				c = 'z' - (argv[1][i] - 'a');
			else if (c >= 'A' && c <= 'Z')
				c = 'Z' - (argv[1][i] - 'A');
			write(1, &c, 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
