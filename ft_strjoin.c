/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obraiki <obraiki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 16:47:21 by obraiki           #+#    #+#             */
/*   Updated: 2022/04/23 17:03:52 by obraiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*a;
	int		b;
	int		c;

	if (!s1 || !s2)
		return (NULL);
	b = ft_strlen(s1);
	c = ft_strlen(s2);
	a = (char *)malloc((b + c + 1) * sizeof(char));
	if (!a)
		return (NULL);
	ft_strlcpy(a, s1, b + 1);
	ft_strlcat(&a[ft_strlen(a)], s2, c + 1);
	return (a);
}
