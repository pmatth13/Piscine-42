/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   rot_13.c                                            :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/08 18:38:17 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/08 18:58:38 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (*argv[1])
	{
		if ((*argv[1] <= 'z' && *argv[1] >= 'n') || (*argv[1] <= 'Z' && *argv[1] >= 'N'))
			*argv[1] = *argv[1] - 13;
		else if ((*argv[1] >= 'a' && *argv[1] <= 'l') || (*argv[1] <= 'A' && *argv[1] >= 'N'))
			*argv[1] = *argv[1] + 13;
		write(1, argv[1], 1);
		argv[1]++;
	}
	write(1, "\n", 1);
}
