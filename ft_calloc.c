/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluzcarv <bluzcarv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 00:39:04 by bluzcarv          #+#    #+#             */
/*   Updated: 2021/08/19 21:00:07 by bluzcarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	/*Calloc uses malloc to allocate memory space and then bzero to attribute
	 * value 0 to the new incitialized mem spaces. Note: using a void pointer
	 * in malloc allow us to handle any * type of variable value. It returns
	 * a pointer to the allocated memory. count = an array of elements;
	 * size = elements number of bytes.*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*allocation;

	allocation = (void *)malloc (count * size);
	if (allocation == NULL)
		return (NULL);
	ft_bzero(allocation, count * size);
	return (allocation);
}
