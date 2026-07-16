/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strdup.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/09 18:26:36 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/09 18:49:02 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char *copy;
	int size;
	int i;

	i = 0;
	size = ft_strlen(src);
	copy = malloc(sizeof(char) * (size + 1);
	if (!copy)
		 return (NULL); 
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
