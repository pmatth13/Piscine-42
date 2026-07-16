/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strrev.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/12 13:03:24 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/12 13:16:53 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strrev(char *str)
{
	int	i;
	int j;
	int	tmp;

	i = 0;
	j = 0;
	while (str[j])
		j++;
	j = j - 1;
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

/*int	main(void)
{
	char s[] = "maison";
	printf("%s\n", ft_strrev(s));
}*/
