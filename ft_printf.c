/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 18:57:39 by yohasega          #+#    #+#             */
/*   Updated: 2024/05/15 17:10:34 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(va_list ap, const char fmt)
{
	int	print_len;

	print_len = 0;
	if (fmt == '%')
		print_len += print_char('%');
	else if (fmt == 'c')
		print_len += print_char(va_arg(ap, int));
	else if (fmt == 's')
		print_len += print_str(va_arg(ap, char *));
	else if (fmt == 'p')
		print_len += print_ptr(va_arg(ap, void *));
	else if (fmt == 'd' || fmt == 'i')
		print_len += print_int(va_arg(ap, int));
	else if (fmt == 'u')
		print_len += print_unsigned(va_arg(ap, unsigned int));
	else if (fmt == 'x')
		print_len += print_hexa(va_arg(ap, unsigned int), 16, 'a');
	else if (fmt == 'X')
		print_len += print_hexa(va_arg(ap, unsigned int), 16, 'A');
	return (print_len);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		print_len;

	print_len = 0;
	va_start(ap, format);
	while (*format != 0)
	{
		if (*format != '%')
			print_len += print_char(*format);
		else
		{
			format++;
			if (ft_strchr("cspdiuxX%", *format))
				print_len += print_format(ap, *format);
			else
				break ;
		}
		format++;
	}
	va_end(ap);
	return (print_len);
}

// int	main(void)
// {
// 	// char	*str;
// 	int		n;

// 	// str = "Snow Man";
// 	// n = 9;
// 	// ft_printf("%s is %dmembers group!\n", str, n);
// 	n = ft_printf("\001\002\007\v\010\f\r\n");
// 	printf("%d\n", n);
// 	n = printf("\001\002\007\v\010\f\r\n");
// 	printf("%d\n", n);
// 	return (0);
// }