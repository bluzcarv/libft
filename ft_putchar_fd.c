/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluzcarv <bluzcarv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 17:44:25 by bluzcarv          #+#    #+#             */
/*   Updated: 2021/08/19 23:26:41 by bluzcarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	/* This function is exactly the same as our ft_putchar function except that
	 * this function requires the file descriptor of where to write the output
	 * as a parameter. So, rather than automatically writing to the standard
	 * output, we choose if we want the to use a file descriptor obtained from
	 * the open system call, or we use 0, 1, or 2, to refer to the standard
	 * input, standard output, or standard error, respectively.*/

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
