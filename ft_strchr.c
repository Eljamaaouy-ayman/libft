/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-jama <ael-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:01:37 by ael-jama          #+#    #+#             */
/*   Updated: 2024/10/31 11:24:30 by ael-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	b;

	i = 0;
	b = (unsigned char)c;
	while (s[i] != '\0')
	{
		if (s[i] == b)
			return ((char *)(s + i));
		i++;
	}
	if (b == '\0')
		return ((char *)(s + i));
	return (NULL);
}
// int main(){
//     printf("%s", ft_strchr(NULL, 'y'));
//     printf("%s", strchr(NULL, 'y'));
// }
