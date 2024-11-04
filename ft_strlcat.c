/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-jama <ael-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:02:07 by ael-jama          #+#    #+#             */
/*   Updated: 2024/11/02 14:27:43 by ael-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dstsize <= dst_len)
		return (src_len + dstsize);
	i = dst_len;
	while (i < dstsize - 1 && src[i - dst_len] != '\0')
	{
		dst[i] = src[i - dst_len];
		i++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}
/*
int	main(void) {
	char dst[20] = "Hello";
	const char *src = " World";
	size_t size = 20;

	size_t result = strlcat(dst, src, size);

	printf("Final string: %s\n", dst);
	printf("Total length: %zu\n", result);

	// size_t result = strlcat(dst, src, size);
	// printf("Final string: %s\n", dst);
	// printf("Total length: %zu\n", result);
	return (0);
}
*/
