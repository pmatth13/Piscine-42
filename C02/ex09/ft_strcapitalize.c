/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strcapitalize.c                                  :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/28 16:31:21 by psaudell       #+#    #+#                */
/*   Updated: 2026/06/29 10:17:29 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (flag == 1 && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if (flag == 0 && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			flag = 0;
		}
		else
			flag = 1;
		i++;
	}
	return (str);
}

/*int main(void)
{
	char s[] = "j'aime ^les frites DE lA 777 mAison 42 super";
	printf("%s", ft_strcapitalize(s));
	return (0);
}*/
