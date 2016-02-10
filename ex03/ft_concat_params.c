/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 14:20:52 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/10 14:42:21 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcat(char *dest, char *src)
{
	int		index;
	int		f;
	
	index = 0;
	f = 0;
	while (dest[index] != '\0')
		index++;
	while (src[f] != '\0')
	{
		dest[index + f] = src[f];
		f++;
	}
	dest[index + f] = '\n';
	dest[index + f + 1] = '\0';
	return (dest);
}

char		*ft_concat_params(int argc, char *argv)
{
	char	*str;
	int		index;
	int		f;
	int		count;
	
	count = 0;
	index = 0;
	f = 0;
	str = (char*)malloc(sizeof(*str) * (count + 1));
	while (count < argc)
	{
		f = 0;
		while (argv[f])
		{
			count++;
			f++;
		}
	}
	while (i < argc - 1)
	{
		str = ft_strcat(str, argv[index + 1]);
		index++;
	}

	return (str);
}
