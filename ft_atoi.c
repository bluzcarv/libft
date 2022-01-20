/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluzcarv <bluzcarv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 21:14:37 by bluzcarv          #+#    #+#             */
/*   Updated: 2021/08/19 20:30:52 by bluzcarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	/*Atoi takes a string of characters that are supposed to be a number
	 * converted into an int. I start by creating 3 variables. First will
	 * will store the result that will be returned  Second will be a
	 * sign treatmente. Thrid a counter for the receved string. The first
	 * while treats every space we might find at the beggining of the string.
	 * The if loop will convert the negative symbol (if there's one) - and
	 * save it in the sign variable, to be multiplied by the result in the
	 * end. The last while loop will convert the string of chars to int as
	 * long as they are numbers - by transforming them into their ascii
	 * numerical value. For the first character of result is set to 0 - I
	 * multiply result by 10 to arrange the digit placement- then subtract
	 * the  ascii value of 0 (48) from the current number -> this will set
	 * it to its ascii value. At the end, we return the value multiplied by
	 * the sign*/

int	ft_atoi(const char *str)
{
	int		result;
	int		sign;
	int		i;

	result = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (sign * result);
}
