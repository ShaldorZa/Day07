/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 13:50:45 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/10 14:15:10 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_ultimate_range(int **range, int min, int max)
{
	int		*ptr;
	int		index;

	ptr = (int*)malloc(sizeof(max - min));
	index = 0;
	if (min >= max)
	{
		range = 0;
		return (range);
	}
	while (index != max)
	{
		ptr[index] = min;
		min++;
		index++;
		range++;
	}
	return (range);
}
