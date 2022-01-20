/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluzcarv <bluzcarv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 16:20:37 by bluzcarv          #+#    #+#             */
/*   Updated: 2021/08/19 21:05:33 by bluzcarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	/* Isalpha checks for alphabetic character. Returns (1) if true, else
	 * (0) if false.*/

int	ft_isalpha(int c)
{
	if (c < 'a' || c > 'z')
	{
		if (c < 'A' || c > 'Z')
			return (0);
	}
	return (1);
}
