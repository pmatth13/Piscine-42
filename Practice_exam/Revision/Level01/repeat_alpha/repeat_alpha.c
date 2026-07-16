/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   repeat_alpha.c                                      :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/08 15:44:46 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/08 16:48:39 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


int		letter_count(char c)
{
	int	repeat;

	if (c >= 'A' && c <= 'Z')
		repeat = c - 'A' + 1;
	else if (c >= 'a' && c <= 'z')
		repeat = c - 'a' + 1;
	else
		repeat = 1;
	return (repeat);
}

int		main(int argc, char **argv)
{
	int	repeat;

	if (argc == 2)
	{
		while (*argv[1])
		{
			repeat = letter_count(*argv[1]);
			while (repeat != 0)
			{
				write(1, argv[1], 1);
				repeat--;
			}
			argv[1]++;
		}
	}
	write(1, "\n", 1);
}

	
