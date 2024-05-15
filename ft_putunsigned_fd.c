/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 17:33:47 by yohasega          #+#    #+#             */
/*   Updated: 2024/05/15 16:46:09 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned_fd(unsigned int n, int fd)
{
	int	len;

	len = 0;
	if (n >= 10)
		len += ft_putunsigned_fd((n / 10), fd);
	len += ft_putchar_fd((n % 10) + '0', fd);
	return (len);
}
