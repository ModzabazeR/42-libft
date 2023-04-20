/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 17:27:25 by phchirap          #+#    #+#             */
/*   Updated: 2023/04/20 13:46:22 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;
	size_t	total_size;

	if (nmemb >= SIZE_MAX && size >= SIZE_MAX)
		return (NULL);
	total_size = nmemb * size;
	mem = malloc(total_size);
	if (nmemb == 0 || size == 0 || mem == NULL)
		return (NULL);
	ft_memset(mem, 0, total_size);
	return (mem);
}
