/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   aff_first_param.c                                   :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/08 12:42:27 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/08 13:01:28 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		write(1, "\n", 1);
	if (argc > 2)
		ft_putstr(argv[1]);
}
