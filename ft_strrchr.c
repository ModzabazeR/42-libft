/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:21:24 by phchirap          #+#    #+#             */
/*   Updated: 2023/04/20 13:53:23 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*ptr;

	len = ft_strlen(s);
	ptr = (char *)(s + len);
	while (len != 0)
	{
		if (*ptr == (char)c)
			return (ptr);
		ptr--;
		len--;
	}
	if (*ptr == (char)c)
		return (ptr);
	return (NULL);
}
