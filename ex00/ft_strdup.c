/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 12:24:52 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/10 12:59:29 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src)
{
	char	*str;
	int		index;

	str = (char*)malloc(sizeof(*src));
	index = 0;
	while (c[index] != '\0')
	{
		str[index] = src[index];
		index++;
	}
	return (str);
}
