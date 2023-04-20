/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 17:42:57 by phchirap          #+#    #+#             */
/*   Updated: 2023/04/20 12:45:04 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*dptr;
	char	*sptr;

	dptr = (char *)dest;
	sptr = (char *)src;
	if (dptr == sptr || len == 0)
		return (dest);
	if (dptr > sptr)
	{
		while (len > 0)
		{
			len--;
			dptr[len] = sptr[len];
		}
		return (dest);
	}
	ft_memcpy(dest, src, len);
	return (dest);
}
