/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   aff_a.c                                             :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/08 11:13:44 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/08 12:15:53 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_a(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == 'a')
			count++;
		i++;
	}
	return (count);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc < 1)
		return (0);
	while (i < argc)
	{
		if (ft_str_a(argv[i]) > 0)
		{
			write(1, "a", 1);
			write(1, "\n", 1);
		}
		else
			write (1, "\n", 1);
		i++;
	}
}
