/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 00:50:31 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/11/20 06:25:01 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	dx;

	dx = 0;
	while (*s != '\0')
	{
		f(dx, s);
		dx++;
		s++;
	}
}
