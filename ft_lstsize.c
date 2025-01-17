/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anareval <anareval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 14:19:43 by anareval          #+#    #+#             */
/*   Updated: 2025/01/17 14:34:56 by anareval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*temp;

	i = 1;
	temp = lst;
	if (!lst)
		return (0);
	while (temp->next)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
