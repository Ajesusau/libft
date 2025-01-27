/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anareval <anareval@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 11:23:46 by anareval          #+#    #+#             */
/*   Updated: 2025/01/27 19:44:29 by anareval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int n)
{
	int	cont;

	cont = 0;
	if (n <= 0)
		cont++;
	while (n != 0)
	{
		n /= 10;
		cont++;
	}
	return (cont);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		cont;
	long	num;

	num = n;
	cont = ft_intlen(n);
	str = malloc(cont + 1);
	if (!str)
		return (NULL);
	str[cont] = '\0';
	cont--;
	if (num < 0)
		num = -num;
	while (cont >= 0)
	{
		if (n < 0 && cont == 0)
			str[cont] = '-';
		else
			str[cont] = (num % 10) + '0';
		num /= 10;
		cont--;
	}
	return (str);
}
