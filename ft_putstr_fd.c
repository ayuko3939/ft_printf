/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 17:33:01 by yohasega          #+#    #+#             */
/*   Updated: 2024/05/15 15:42:02 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	len;

	if (s == NULL)
		return (0);
	len = ft_strlen(s);
	write(fd, s, len);
	return (len);
}

// int main(void)
// {
//     int filds = 1;
//     char *str = "Snow Man";
//     ft_putstr_fd(str, filds);
//     return (0);
// }

// ccw ft_putstr_fd.c ft_strlen.c