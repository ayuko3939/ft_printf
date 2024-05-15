/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:22:11 by yohasega          #+#    #+#             */
/*   Updated: 2024/05/15 17:05:25 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h> // va_list
# include <stddef.h> // size_t
# include <stdint.h> // uintptr_t
# include <unistd.h> // write

// = = = Libraries for Test = = = =
# include <stdio.h>
// = = = = = = = = = = = = = = = =

// -+-+-+-+-+-+-+-+- libft -+-+-+-+-+-+-+-+-

int		ft_isprint(int c);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *s, int c);

// -+-+-+-+-+-+-+- ft_printf -+-+-+-+-+-+-+-

int		ft_printf(const char *format, ...);

int		ft_putchar_fd(char c, int fd);
int		ft_puthexa_fd(unsigned int n, size_t radix, char alph, int fd);
int		ft_putnbr_fd(int n, int fd);
int		ft_putptr_fd(uintptr_t n, int fd);
int		ft_putstr_fd(char *s, int fd);
int		ft_putunsigned_fd(unsigned int n, int fd);

int		print_char(char c);
int		print_hexa(unsigned int n, size_t radix, char alph);
int		print_int(int n);
int		print_ptr(void *n);
int		print_str(char *s);
int		print_unsigned(unsigned int n);

#endif