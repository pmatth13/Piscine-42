/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   wdmatch.c                                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/14 12:34:31 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/14 13:12:25 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;
	int j;
	int index;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		index = ft_strlen(argv[1]);
		while (argv[2][j])
		{
			if (argv[1][i] == argv[2][j])
			{
				i++;
			}
			j++;
		}
		if (i == index)
			ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
}
