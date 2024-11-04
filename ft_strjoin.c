/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-jama <ael-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:54:45 by ael-jama          #+#    #+#             */
/*   Updated: 2024/11/03 20:36:37 by ael-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;
	int		j;
	int		k;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = -1;
	k = ft_strlen(s1);
	j = ft_strlen(s2);
	s3 = malloc(k + j + 1);
	if (s3 == NULL)
		return (NULL);
	while (++i < k)
		s3[i] = s1[i];
	i--;
	while (i++ < k + j - 1)
		s3[i] = s2[i - k];
	s3[i] = '\0';
	return (s3);
}
/*
int	main(void) {
	char dst[20] = "Hello";
	const char *src = " World";

	printf("Final string: %s\n", ft_strjoin(dst,src));
	return (0);
}*/
