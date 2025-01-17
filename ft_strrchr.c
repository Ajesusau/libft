/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anareval <anareval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:44:43 by anareval          #+#    #+#             */
/*   Updated: 2024/12/19 17:08:09 by anareval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*str_tmp;

	str_tmp = NULL;
	while (*str)
	{
		if (*str == (char)c)
		{
			str_tmp = (char *)str;
		}
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return (str_tmp);
}
