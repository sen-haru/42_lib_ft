/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:52:53 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/11/15 20:31:26 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdbool.h>
#include "libft.h"

bool little_match(const char *big, const char *little)
{
	while (*little != '\0')
	{
		if (*big != *little)
		{
			return (false);
		}
		big++;
		little++;
	}
	return(true);
}

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	int	count;

	count = 0;
	while (*big != '\0' && count + ft_strlen(little) < len)
	{
		if (*big == *little)
		{
			if (little_match(big, little) == true)
			{
				return ((char *)big);
			}
		}
		big++;
		count++;
	}
	return (NULL);
}

