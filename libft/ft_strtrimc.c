/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrimc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltimsit- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 15:31:48 by ltimsit-          #+#    #+#             */
/*   Updated: 2019/04/08 15:36:04 by ltimsit-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrimc(const char *s, char c)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = ft_strlen(s);
	j = -1;
	while (i && (s[i - 1] == c))
		i--;
	while (i && *s == c)
	{
		s++;
		i--;
	}
	str = ft_strnew(i);
	while (++j < i && str)
		str[j] = s[j];
	return (str);
}
