/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-jama <ael-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:21:11 by ael-jama          #+#    #+#             */
/*   Updated: 2024/10/31 11:26:16 by ael-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	b;

	i = ft_strlen(s);
	b = (unsigned char)c;
	if (b == '\0')
		return ((char *)(s + i));
	while (i > 0)
	{
		if (s[i - 1] == b)
			return ((char *)(s + i -1));
		i--;
	}
	return (NULL);
}
// int main(){
//     printf("%s", ft_strrchr("ayman", 'y'));
//     printf("%s", strrchr("ayman", 'y'));
// }
