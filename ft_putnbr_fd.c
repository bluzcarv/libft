/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluzcarv <bluzcarv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 13:53:49 by bluzcarv          #+#    #+#             */
/*   Updated: 2021/08/21 15:51:19 by bluzcarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	/* Putnbr_fd is the same and putnbr except that this function requires the
	 * file descriptor of where to write the output as a parameter. So, rather
	 * than automatically writing to the standard output, we choose if we want
	 * the to use a file descriptor obtained from the open system call, or we
	 * use 0, 1, or 2, to refer to the standard input, standard output, or
	 * standard error, respectively.*/

void	ft_putnbr_fd(int n, int fd)
{
	char		newchar;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n = -n;
			ft_putnbr_fd(n, fd);
		}
		else if (n < 10)
		{
			newchar = n + '0';
			write(fd, &newchar, 1);
		}
		else
		{
			ft_putnbr_fd(n / 10, fd);
			newchar = (n % 10) + '0';
			write(fd, &newchar, 1);
		}
	}
}
