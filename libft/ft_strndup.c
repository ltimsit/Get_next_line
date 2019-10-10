/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltimsit- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 12:40:05 by ltimsit-          #+#    #+#             */
/*   Updated: 2019/04/08 13:02:29 by ltimsit-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*dest;
	int		i;

	i = 0;
	dest = ft_strnew(ft_strnlen(s1, n));
	while (*s1 && n-- && dest)
	{
		dest[i] = *s1;
		i++;
		s1++;
	}
	if (dest)
		dest[i] = '\0';
	return (dest);
}
