/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-jama <ael-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:32:52 by ael-jama          #+#    #+#             */
/*   Updated: 2024/11/05 16:19:25 by ael-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void to_uppercase(unsigned int index, char *c)
// {
//     if (*c >= 'a' && *c <= 'z') 
//         *c = *c - 32;       
//     printf("Index %u: %c\n", index, *c);
// }
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
