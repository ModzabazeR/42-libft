/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 13:31:04 by phchirap          #+#    #+#             */
/*   Updated: 2023/04/10 18:13:21 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	ret;

	i = 0;
	while (dst[i] != '\0' && i < n)
		i++;
	ret = ft_strlcpy(dst + i, src, n - i);
	return (ret + i);
}
