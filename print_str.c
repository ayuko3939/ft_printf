/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 10:33:37 by yohasega          #+#    #+#             */
/*   Updated: 2024/05/15 15:56:47 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_str(char *s)
{
	if (s == NULL)
		return (ft_putstr_fd("(null)", 1));
	else
		return (ft_putstr_fd(s, 1));
}
