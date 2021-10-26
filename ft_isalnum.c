/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:18:55 by bpoetess          #+#    #+#             */
/*   Updated: 2021/10/07 16:20:28 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int	c);
int	ft_isdigit(int	c);

int	ft_isalnum(int	c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (c);
	return (0);
}
