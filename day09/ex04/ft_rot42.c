/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 22:51:12 by adorn             #+#    #+#             */
/*   Updated: 2016/08/18 23:24:36 by adorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	char *str_begin;

	str_begin = str;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'j')
			*str += 16;
		else if (*str >= 'k' && *str <= 'z')
			*str -= 10;
		if (*str >= 'A' && *str <= 'J')
			*str += 16;
		else if (*str >= 'K' && *str <= 'Z')
			*str -= 10;
		str++;
	}
	return (str_begin);
}
