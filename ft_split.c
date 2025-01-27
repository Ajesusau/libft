/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anareval <anareval@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 10:04:14 by anareval          #+#    #+#             */
/*   Updated: 2025/01/27 19:45:43 by anareval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_inivar(size_t *i, int *j, int *inistr)
{
	*i = 0;
	*j = 0;
	*inistr = -1;
}

int	ft_contstr(char const *s, char c)
{
	int	count;
	int	x;

	count = 0;
	x = 0;
	while (*s)
	{
		if (*s != c && x == 0)
		{
			x = 1;
			count++;
		}
		else if (*s == c)
			x = 0;
		s++;
	}
	return (count);
}

void	*ft_free(char **str, int cont)
{
	int	i;

	i = 0;
	while (i < cont)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

int	ft_strlendelim(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	int		j;
	int		inistr;

	ft_inivar(&i, &j, &inistr);
	str = ft_calloc((ft_contstr(s, c) + 1), sizeof(char *));
	if (!str)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && inistr < 0)
			inistr = i;
		else if ((s[i] == c || i == ft_strlen(s)) && inistr >= 0)
		{
			str[j] = ft_substr(s, inistr, ft_strlendelim(&s[inistr], c));
			if (!str[j])
				return (ft_free(str, j));
			j++;
			inistr = -1;
		}
		i++;
	}
	return (str);
}
