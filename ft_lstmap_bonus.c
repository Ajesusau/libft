/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anareval <anareval@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:53:43 by anareval          #+#    #+#             */
/*   Updated: 2025/01/27 19:44:41 by anareval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_cont;
	t_list	*temp;

	new_lst = NULL;
	temp = NULL;
	while (lst)
	{
		new_cont = malloc(sizeof(t_list));
		if (!new_cont)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		new_cont->content = f(lst->content);
		new_cont->next = NULL;
		if (!new_lst)
			new_lst = new_cont;
		else
			temp->next = new_cont;
		temp = new_cont;
		lst = lst->next;
	}
	return (new_lst);
}
