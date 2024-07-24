/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busseven <busras3v3n@proton.me>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:55:47 by busseven          #+#    #+#             */
/*   Updated: 2024/07/22 15:57:01 by busseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 0;
	if (power > 0)
		result = nb * ft_recursive_power(nb, power - 1);
	else if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	return (result);
}
