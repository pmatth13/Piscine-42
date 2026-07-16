/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ulstr.c                                             :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/08 18:14:04 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/08 18:36:10 by psaudell       ########   odam.nl        */
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
		if (*argv[1] >= 'a' && *argv[1] <= 'z')
		{
			*argv[1] = *argv[1] - 32;
			write(1, argv[1], 1);
		}
		else if (*argv[1] >= 'A' && *argv[1] <= 'Z')
		{
			*argv[1] = *argv[1] + 32;
			write(1, argv[1], 1);
		}
		else 
			write(1, argv[1], 1);
		argv[1]++;
	}
}	
