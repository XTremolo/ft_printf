/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 13:21:22 by obamzuro          #+#    #+#             */
/*   Updated: 2018/05/08 20:25:33 by obamzuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		pf_write(char src, t_buffer *buff)
{
	if (buff->cur >= PRINTF_BUFF_SIZE)
	{
		write(1, buff->line, PRINTF_BUFF_SIZE);
		buff->cur = 0;
		++(buff->ret);
	}
	buff->line[buff->cur] = src;
	++(buff->cur);
}

void		pf_write_tail(t_buffer *buff)
{
	write(1, buff->line, buff->cur);
}
