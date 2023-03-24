/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 03:09:49 by yoelansa          #+#    #+#             */
/*   Updated: 2023/03/24 03:10:00 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (0);
	return (1);
}
