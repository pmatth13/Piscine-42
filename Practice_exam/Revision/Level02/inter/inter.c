/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   inter.c                                             :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/10 11:01:11 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/10 12:32:47 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


int main(int argc, char **argv)
{
	int i;
	int j;
	int k;
	int len;

	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	len = 0;
	while (argv[1][len])
		len++;
	char found[len];
	i = 0;
	k = 0;
	while (argv[1][i])
	{
		j = 0;
		while (argv[2][j] && argv[2][j] != argv[1][j])
			j++;
		if (argv[2][j])
		{
			j = 0;
			while (j < k && found[j] != argv[1][i])
				j++;
			if (j == k)
				found[k++] == argv[1][i];
		}
		i++;
	}
	j = 0;
	while (j < k)
		write (1, &found[j++], 1);
	write (1, "\n", 1);
	return (0);
}			
