/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-jama <ael-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:21:28 by ael-jama          #+#    #+#             */
/*   Updated: 2024/11/02 23:14:56 by ael-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	powerr(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = n * (-1);
	}
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*s;

	i = powerr(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	s = (char *)malloc(i + 1);
	if (s == NULL)
		return (NULL);
	s[i] = '\0';
	i--;
	if (n < 0)
		n = n * (-1);
	while (i >= 0 && n > 0)
	{
		s[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
	if (i == 0)
		s[0] = '-';
	return (s);
}

// int main() {
//   printf("%s", ft_itoa(2147483647));
//   return 0;
// }