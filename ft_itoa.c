/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phchirap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:53:19 by phchirap          #+#    #+#             */
/*   Updated: 2023/04/20 14:58:22 by phchirap         ###   ########.fr       */
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

char	*ft_rev_int(int n)
{
	char	*ret;
	int		len;
	int		i;

	len = ft_intlen(n);
	i = 0;
	ret = (char *)malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		ret[i] = n % 10 + '0';
		n /= 10;
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

char	*ft_itoa_process(char *result, int n, int i, int len)
{
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
	result[len] = '\0';
	while (--len > 0)
	{
		result[len] = n % 10 + '0';
		n /= 10;
	}
	if (result[len] != '-')
		result[len] = n % 10 + '0';
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
