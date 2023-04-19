/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:53:19 by phchirap          #+#    #+#             */
/*   Updated: 2023/04/18 17:32:04 by phchirap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
		return (11);
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

int	ft_find_mult(int n)
{
	int	mult;
	int	len;

	len = ft_intlen(n);
	mult = 1;
	while (len > 1)
	{
		mult *= 10;
		len--;
	}
	return (mult);
}

char	*ft_itoa_process(char *result, int n, int i, int len)
{
	int	mult;

	if (n == -2147483648)
	{
		while (i < len)
		{
			result[i] = "-2147483648"[i];
			i++;
		}
		result[i] = '\0';
		return (result);
	}
	mult = ft_find_mult(n);
	while (i < len)
	{
		result[i++] = n / mult + '0';
		n %= mult;
		mult = ft_find_mult(n);
	}
	result[i] = '\0';
	return (result);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		i;
	int		len;

	i = 0;
	len = ft_intlen(n);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	if (n < 0 && n != -2147483648)
	{
		result[i] = '-';
		n = -n;
		i++;
	}
	return (ft_itoa_process(result, n, i, len));
}
