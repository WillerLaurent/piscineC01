/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwiller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 10:52:07 by lwiller           #+#    #+#             */
/*   Updated: 2020/09/12 13:58:46 by lwiller          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		i;
	char	c;

	i = 0;
	c = str[i];
	while (c != '\0')
	{
		i++;
		c = str[i];
	}
	return (i);
}
