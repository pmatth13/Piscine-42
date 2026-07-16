/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   rotone.c                                            :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/09 16:55:00 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/09 17:26:47 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main (int argc, char **argv)
{
	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		while (*argv[1])
		{
			if (*argv[1] == 'z')
			{
				write(1, "a", 1);
				argv[1]++;
			}
			else if(*argv[1] == 'Z')
			{
				write(1, "A", 1);
				argv[1]++;
			}
			else 
			{
				ft_putchar(*argv[1] + 1);
				argv[1]++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
