/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluzcarv <bluzcarv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0000/08/05 18:07:03 by bluzcarv          #+#    #+#             */
/*   Updated: 2021/08/21 17:08:46 by bluzcarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	/* Striteri will apply function (f) to each character of string (s), passed
	 * as argument. First we creat an unsigned int varaible, to compensate for
	 * the possibility of a long string. we start at the beggining of the
	 * string until '\0', applying the function (f) to each character.*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int		i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}
