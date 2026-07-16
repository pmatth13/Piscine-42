/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strrev.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/14 16:08:23 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/14 16:16:04 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int	i;
	int j;
	char tmp;

	i = 0;
	while (str[i])
		i++;
	j = i -1;
	i = 0;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	return (str);
}

int	main(void)
{
	char s[] = "maison";
	printf("%s\n", ft_strrev(s));
}
