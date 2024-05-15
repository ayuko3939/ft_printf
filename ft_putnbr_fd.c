/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 17:33:47 by yohasega          #+#    #+#             */
/*   Updated: 2024/05/15 15:48:53 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int n, int fd)
{
	int	len;

	len = 0;
	if (n == -2147483648)
	{
		len += ft_putstr_fd("-2147483648", fd);
		return (len);
	}
	if (n < 0)
	{
		len += ft_putchar_fd('-', fd);
		n = n * -1;
	}
	if (n >= 10)
		len += ft_putnbr_fd((n / 10), fd);
	len += ft_putchar_fd((n % 10) + '0', fd);
	return (len);
}

// int main(void)
// {
//     int filds = 1;
//     int number = 1234;
//     ft_putnbr_fd(number, filds);
//     return (0);
// }

//ccw ft_putnbr_fd.c ft_putchar_fd.c ft_putstr_fd.c ft_strlen.c