/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltimsit- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 13:09:10 by ltimsit-          #+#    #+#             */
/*   Updated: 2019/04/05 11:11:24 by ltimsit-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *cdst;
	char *csrc;

	cdst = (char *)dst;
	csrc = (char *)src;
	if (dst == src)
		return (dst);
	while (n--)
	{
		*cdst++ = *csrc++;
	}
	return (dst);
}
