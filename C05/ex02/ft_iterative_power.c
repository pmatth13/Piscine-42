/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                                :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 17:56:44 by psaudell          #+#    #+#             */
/*   Updated: 2026/07/07 13:10:59 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	nb_power;

	i = 0;
	nb_power = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		nb_power = nb_power * nb;
		i++;
	}
	return (nb_power);
}
