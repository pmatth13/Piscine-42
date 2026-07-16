/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 12:30:39 by psaudell          #+#    #+#             */
/*   Updated: 2026/07/07 18:02:21 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j] && str[i + j] == to_find[j])
			j++;
		if (to_find[j])
			return (&str[i]);
		i++;
	}
	if (to_find[0] == '\0')
		return (str);
	else
		return (0);
}

int	main(void)
{
	printf("%s\n", ft_strstr("J'aime la pizza margherita", "margherita"));
	printf("%s\n", ft_strstr("J'aime la pizza margherita", ""));
	printf("%s\n", ft_strstr("J'aime la pizza margherita", "pepperoni"));
}		
