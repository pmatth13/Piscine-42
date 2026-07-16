/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 12:12:10 by psaudell          #+#    #+#             */
/*   Updated: 2026/07/04 13:28:41 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(int argc, char **argv)
{
    
}

//tab = le tableau (1,2,3,4), index = (l ou c), size = taille de la grille, view = ligne de vue)
int ft_visibilite(int *tab, int index, int size, int view)
{
    int max;
    int count;```````+
    
    int i;

    i = 0;
    max = 0;
    count = 0;
    while (tab[i] < size)
    {
        if (tab[i] > max)
        {
            max = tab[i];
            count ++;
        }
        i++;
    }
    return (count);   
}

//grille = valeur de la grille (n*n), k = quelle ligne/colonne ?, 
int *ft_extraction( int *grille,int n, int k, int index)
{
 int *tab;
 
    return(*tab)
}