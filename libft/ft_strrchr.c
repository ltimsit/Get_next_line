/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltimsit- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 11:52:50 by ltimsit-          #+#    #+#             */
/*   Updated: 2019/04/05 11:14:50 by ltimsit-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strrchr(const char *s, int c)
{
	char *str;

	str = NULL;
	while (*s)
	{
		if (*s == c)
			str = (char *)s;
		s++;
	}
	if (*s == c)
		str = (char *)s;
	return (str);
}
