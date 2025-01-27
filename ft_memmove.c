/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anareval <anareval@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:07:23 by anareval          #+#    #+#             */
/*   Updated: 2025/01/27 19:44:55 by anareval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_tmp;
	unsigned char	*src_tmp;

	if (!dst && !src)
		return (0);
	dst_tmp = (unsigned char *)dst;
	src_tmp = (unsigned char *)src;
	if (dst_tmp < src_tmp || dst_tmp >= src_tmp + n)
	{
		while (n-- > 0)
		{
			*dst_tmp++ = *src_tmp++;
		}
	}
	else
	{
		while (n--)
		{
			dst_tmp[n] = src_tmp[n];
		}
	}
	return (dst);
}
