/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltimsit- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 14:07:01 by ltimsit-          #+#    #+#             */
/*   Updated: 2019/04/03 15:12:23 by ltimsit-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*cdst;
	char	*csrc;

	cdst = (char *)dst;
	csrc = (char *)src;
	if (src == dst)
		return (dst);
	if (src > dst)
	{
		while (len--)
			*cdst++ = *csrc++;
	}
	else
	{
		while (len--)
			cdst[len] = csrc[len];
	}
	return (dst);
}
