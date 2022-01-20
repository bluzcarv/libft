/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluzcarv <bluzcarv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 18:29:24 by bluzcarv          #+#    #+#             */
/*   Updated: 2021/08/19 21:51:24 by bluzcarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	/* lstadd_back will add the element 'new' (second argument) to the end of
	 * (lst). *new is the address of a pointer to the element to be added to
	 * the list. If there's nothing in lst, new will be assigned to it. Else,
	 * */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_element;

	if (*lst == NULL)
		*lst = new;
	else
	{
		last_element = ft_lstlast(*lst);
		last_element->next = new;
	}
}
