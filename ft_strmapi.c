/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-jama <ael-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:25:25 by ael-jama          #+#    #+#             */
/*   Updated: 2024/11/03 13:37:44 by ael-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char toUpper(unsigned int i, char c)
// {
// 	c++;
// 	return c;
// }
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*s1;

	if (s == NULL || f == NULL)
		return (NULL);
	i = ft_strlen(s);
	s1 = (char *)malloc(i + 1);
	if (s1 == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		s1[i] = f(i, s[i]);
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
// int main(){
// 	char *s = "yasser";
// 	char	*ptr = ft_strmapi(s, toUpper);
// 	printf("%s", ptr);
// }
