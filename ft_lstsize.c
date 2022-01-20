/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluzcarv <bluzcarv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:06:17 by bluzcarv          #+#    #+#             */
/*   Updated: 2021/08/22 13:15:44 by bluzcarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	/*lstlast counts the number of elemnts in a list. Return it's length.
	 * Parameter:(lst) = beggining of list. We create a counter size which
	 * will be incremented by 1, each time we access a next element in the
	 * list - until it's done and size is returned.*/

int	ft_lstsize(t_list *lst)
{
	int		size;

	if (lst == NULL)
		return (0);
	size = 0;
	while (lst)
	{
		size = size + 1;
		lst = lst->next;
	}
	return (size);
}
