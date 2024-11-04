/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-jama <ael-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:35:31 by ael-jama          #+#    #+#             */
/*   Updated: 2024/11/03 14:14:51 by ael-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*new_dst;
	unsigned char	*new_src;
	size_t			i;

	new_dst = (unsigned char *)dst;
	new_src = (unsigned char *)src;
	if (new_dst == new_src || len == 0)
		return (dst);
	if (new_src < new_dst && new_dst < new_src + len)
	{
		while (len-- > 0)
			new_dst[len] = new_src[len];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			new_dst[i] = new_src[i];
			i++;
		}
	}
	return (dst);
}
