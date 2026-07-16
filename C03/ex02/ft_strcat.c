/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strcat.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/29 16:27:26 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/01 16:32:10 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

/*int	main(void)
{
	char s1[100]= "bonjour";
	char s2[100]="hello";
	printf("%s\n", ft_strcat(s1, s2));
}*/
