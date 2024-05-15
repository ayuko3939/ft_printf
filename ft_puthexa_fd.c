/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 17:33:47 by yohasega          #+#    #+#             */
/*   Updated: 2024/05/15 16:16:33 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa_fd(unsigned int n, size_t radix, char alph, int fd)
{
	int	len;

	len = 0;
	if (n >= radix)
		len += ft_puthexa_fd(n / radix, radix, alph, fd);
	n = n % radix;
	if (n < 10)
		len += ft_putchar_fd(n + '0', 1);
	else
		len += ft_putchar_fd(n - 10 + alph, fd);
	return (len);
}

//======================== another code ========================
// static void	put_hexa(unsigned int nbr, bool upper_case)
// {
// 	static char	upper_digits[] = "0123456789ABCDEF";
// 	static char	lower_digits[] = "0123456789abcdef";

// 	if (nbr >= 16)
// 		put_hexa((nbr / 16), upper_case);
// 	if (upper_case == true)
// 		write(STDOUT_FILENO, &upper_digits[nbr % 16], 1);
// 	else
// 		write(STDOUT_FILENO, &lower_digits[nbr % 16], 1);
// }
//==============================================================