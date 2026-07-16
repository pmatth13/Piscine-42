/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strcpy.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/26 14:15:03 by psaudell       #+#    #+#                */
/*   Updated: 2026/06/28 12:32:29 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main(void)
{
	char  a[100] = "a";
	char  *b;

	b = "maison";
	ft_strcpy(a, b);
	printf(" Le mot a de base = a; maintenant = %s\n", a);
	printf(" Le mot b de base = maison;");
	return (0);
}*/
