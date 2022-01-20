/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_split.c										 :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: bluzcarv <bluzcarv@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/08/16 17:54:41 by bluzcarv		  #+#	#+#			 */
/*   Updated: 2021/08/17 11:45:33 by bluzcarv		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

	/*This function will allocate memory and return a 'fresh' table of strings
	 * (all terminated by a '\0', the table as well) as a result of the
	 * splitting of the given string by the given character c. If memory
	 * allocation fails at any point the function will return NULL. And example
	 * of this function is ft_strsplit("*hello*fellow***students*", '*'). This
	 * should return a table that splits the string int ["hello", "fellow",
	 * "students"]. ft_get_nbrstr will return the number of words we have
	 * among the character 'c'. ft_get_lengh will return the lengh of each
	 * str (==word), so we can apply malloc later on.  */

static size_t	ft_get_nbrstr(char *s, char c)
{
	size_t		nbrstr;
	short int	str_found;

	str_found = 0;
	nbrstr = 0;
	if (!s)
		return (0);
	while (1)
	{
		if ((*s == c || *s == '\0') && str_found != 0)
		{
			nbrstr++;
			str_found = 0;
		}
		else if (*s != c)
			str_found = 1;
		if (*s == '\0')
			break ;
		s++;
	}
	return (nbrstr);
}

static size_t	ft_get_length(char *s, char c)
{
	size_t	index;

	index = 0;
	while (*s && *s != c)
	{
		index++;
		s++;
	}
	return (index);
}

static void	ft_malloc_error(char **matrix, size_t nbrstr)
{
	size_t	index;

	index = 0;
	while (index < nbrstr)
	{
		if (matrix[index])
			free(matrix[index]);
		index++;
	}
	free(matrix);
}

char	**ft_split(char const *s, char c)
{
	size_t	nbrstr;
	size_t	index;
	char	**matrix;

	index = 0;
	if (!s)
		return (NULL);
	nbrstr = ft_get_nbrstr((char *)s, c);
	matrix = (char **)ft_calloc(nbrstr + 1, sizeof(char *));
	if (!matrix)
		return (NULL);
	while (nbrstr--)
	{
		while (*s == c)
			s++;
		matrix[index] = ft_substr((char *)s, 0, ft_get_length((char *)s, c));
		if (!matrix[index])
		{
			ft_malloc_error(matrix, index);
			return (0);
		}
		s = s + ft_get_length((char *)s, c);
		index++;
	}
	return (matrix);
}
