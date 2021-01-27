/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: runaibay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 11:00:58 by runaibay          #+#    #+#             */
/*   Updated: 2019/11/08 11:31:41 by runaibay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unisrd>

char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i]);
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] =s2[i]
		return(0);
}
int main (void)
{
	char str1[] = "Flavio";
	char str2[] = "Gaucho";

	printf("%s\n", str1);
	ft_strcpy(str1, str2);
	printf("%s\n", str1);
	return(0);
}
