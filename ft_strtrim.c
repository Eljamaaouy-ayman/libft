/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-jama <ael-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 09:23:23 by ael-jama          #+#    #+#             */
/*   Updated: 2024/11/03 18:43:48 by ael-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_contains(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		end;
	int		start;
	char	*s;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_contains(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_contains(set, s1[end - 1]))
		end--;
	len = end - start;
	s = ft_substr(s1, start, len);
	return (s);
}
/*
  int main(){
		char *s = "eljamelelaaouyaymane1lelellllllle";
		char *s1 = "el";
		printf("%s", ft_strtrim(s, s1));
  }
*/