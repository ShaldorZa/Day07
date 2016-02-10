/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 13:01:10 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/10 13:21:54 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_range(int min, int max)
{
	int		*ptr;
	int		index;

	ptr = (int*)malloc(sizeof(max - min));
	index = 0;
	if (min >= max)
		return (0);
	while (index != max)
	{
		ptr[index] = min;
		min++;
		index++;
	}
		
	return (ptr);
}
