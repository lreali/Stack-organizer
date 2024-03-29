/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 18:43:16 by ereali            #+#    #+#             */
/*   Updated: 2021/07/29 18:53:20 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_cpy(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*result;

	i = 0;
	j = 0;
	result = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 2);
	if (!(result))
		return (NULL);
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	result[i] = ' ';
	i++;
	while (s2[j])
	{
		result[i] = s2[j];
		j++;
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	*strjoinspace(char *s1, char const *s2)
{
	char	*result;

	if ((!(s1)) && (!(s2)))
		return (NULL);
	if (!(s1))
		return ((char *)s2);
	if (!(s2))
		return ((char *)s1);
	result = ft_cpy(s1, s2);
	free(s1);
	return (result);
}

void	Checklst(int *lst, int argc)
{
	int	i;

	i = 0;
	while (i < argc - 2)
	{
		if (lst[i] > lst[i + 1])
			return ;
		i++;
	}
	free(lst);
	exit(EXIT_SUCCESS);
}

int	*Createlst(char **argv, int argc)
{
	int		*lst;
	char	*param;
	int		i;

	i = 1;
	if (argc < 2)
		return (0);
	param = (char *)malloc((sizeof (char) * (ft_strlen(argv[1]) + 1)));
	if (!param)
		exit(EXIT_FAILURE);
	ft_bzero(param, ft_strlen(argv[1]) + 1);
	while (i < argc)
	{
		param = strjoinspace(param, argv[i]);
		i++;
	}
	lst = ErrorGest(param, argc);
	if (param)
		free(param);
	return (lst);
}

int	main(int argc, char **argv)
{
	int		*lst;
	t_list	*a;
	t_list	*b;

	b = NULL;
	lst = Createlst(argv, argc);
	Checklst(lst, argc);
	if ((argc - 1) <= 3)
		Sort3(lst, argc - 1);
	a = StackGeneration(argc - 1, lst);
	Setposition(&a);
	Needra(&a);
	if (argc - 1 <= 5)
	{
		sort5(&a, &b);
		freelst(&a);
		exit(EXIT_SUCCESS);
	}
	ft_order(&a, &b);
	return (0);
}
