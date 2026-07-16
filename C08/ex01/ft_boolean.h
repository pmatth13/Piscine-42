/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_boolean.h                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/15 19:48:47 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/15 20:01:10 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# define EVEN_MSG "I have an even number of arguments."
# define ODD_MSG "I have an odd number of arguments."

# define SUCCESS 0
# define EVEN(nbr) ((nbr) % 2 == 0)

typedef int t_bool;

# define TRUE 1
# define FALSE 0

#endif
