/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   last_word.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/10 12:34:16 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/10 13:22:23 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isblank(char c)
{
	if ((c >= 9 && c <= 13) || c = 13)
		return (1);
	return (0);
}

int main(int argc, char **argv)
{
	char *str;
	int end;
	int start;

	if (argc == 2)
	{
		str = argv[1];
		end = 0;
		while (str[end])
			end++;
		end--;
		while (end >= 0 && ft_isblank(str[end]))
			end--;
		start = end;
		while (start >= 0 && !ft_isblank(str[start]))
			start--;
		start++;
		while (start <= end)
		{
			write(1, &str[start], 1);
			start++;
		}
	}
	write(1, "\n", 1);
	return (0);
}			
