/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anareval <anareval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 11:30:42 by anareval          #+#    #+#             */
/*   Updated: 2024/12/17 11:57:44 by anareval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t count)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	while (count--)
	{
		*ptr = '\0';
		ptr++;
	}
}
