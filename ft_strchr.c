/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_strchr.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: bluzcarv <bluzcarv@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/07/30 13:22:05 by bluzcarv		  #+#	#+#			 */
/*   Updated: 2021/08/03 16:39:20 by bluzcarv		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

	/* Returns a pointer to the first occurrence of character in the C string
	 * str. The terminating null-character is considered part of the C string.
	 * Therefore, it can also be located in order to retrieve a pointer to the
	 * end of a string.*/

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char) c)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == (unsigned char) c)
		return ((char *)s + i);
	return (NULL);
}
