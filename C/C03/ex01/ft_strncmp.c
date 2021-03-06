/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 13:50:06 by ysoroko           #+#    #+#             */
/*   Updated: 2020/10/15 08:40:53 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (n > 0)
	{
		while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0') && i < n - 1)
		{
			i++;
		}
		return (s1[i] - s2[i]);
	}
	return (0);
}
