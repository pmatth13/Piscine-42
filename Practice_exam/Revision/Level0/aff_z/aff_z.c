/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   aff_z.c                                             :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/08 13:28:47 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/08 13:46:53 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	count_z(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == 'z')
			count++;
		i++;
	}
	return (count);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc < 1)
		return (0);
	while (i < argc)
	{
		if (count_z(argv[i]) > 0)
			ft_putstr("z\n");
		else
			ft_putstr("\n");
		i++;
	}
}

