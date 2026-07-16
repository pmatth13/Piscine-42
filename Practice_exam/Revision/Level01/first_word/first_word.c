/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   first_word.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/09 12:39:52 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/09 13:27:07 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		while ((*argv[1] >= 9 && *argv[1] <= 13) || *argv[1] == 32)
			argv[1]++;
		while (*argv[1] && *argv[1] != ' ' && !(*argv[1] >= 9 && *argv[1] <= 13))
		{
			write(1, argv[1], 1);
			argv[1]++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
