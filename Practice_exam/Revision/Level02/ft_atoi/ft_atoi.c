/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_atoi.c                                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/09 17:29:36 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/09 18:02:25 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int nbr;
	int sign;
	
	i = 0;
	nbr = 0;
	sign = 1;
	while(str[i])
	{
		if (str[i] >= 9 && str[i] <= 13 || str[i] == 32)
			i++;
		else if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				sign = -1;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			nbr = nbr * 10 + (str[i] - '0');
			i++;
		}
		return (nbr * sign);
	}
}
