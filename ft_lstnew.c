/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluzcarv <bluzcarv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 18:28:32 by bluzcarv          #+#    #+#             */
/*   Updated: 2021/08/19 21:45:25 by bluzcarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	/*This function will allocate memory and return a new linked list.The dot
	 * (.) operator is used to access a member of a struct, while the arrow
	 * operator (->) in C is used to access a member of a struct which is
	 * referenced by the pointer in question. In this case, the pointer does
	 * not have any members to be accessed with the dot. It reads:int i = 5;
	 * i->b = 42;(Write 42 into `int` at address 7)100->a = 0; (Write 0 into
	 * `int` at address 100 )*/

t_list	*ft_lstnew(void *content)
{
	t_list	*new_element;

	new_element = (t_list *) malloc(sizeof(t_list) * 1);
	if (new_element == NULL)
		return (NULL);
	new_element->content = content;
	new_element->next = NULL;
	return (new_element);
}
