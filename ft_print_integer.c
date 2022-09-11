/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 03:26:11 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/09/11 19:36:58 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_integer(int number)
{
	char	*itoa_number;
	int		bytes;

	itoa_number = ft_itoa(number);
	bytes = ft_print_string(itoa_number);
	free(itoa_number);
	return (bytes);
}
