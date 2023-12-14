/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpennacc <cpennacc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 09:28:23 by cpennacc          #+#    #+#             */
/*   Updated: 2023/12/07 10:36:55 by cpennacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	charcheck(char c)
{
	if (c >= 'a' && c >= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c >= 'Z')
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(charcheck(str[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
