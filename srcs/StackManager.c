/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StackManager.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 20:55:41 by ereali            #+#    #+#             */
/*   Updated: 2021/07/07 14:17:23 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	Createchain(t_list **root, int *lst, int lstlen)
{
	int i;

	i = 0;
	while (i < lstlen)
	{
		ft_lstadd_back(root, ft_lstnew(lst[i]));
		i++;
	}
}

void	PrintfChain(t_list	**root)
{
	t_list	*tmp;

	tmp = (*root);
	while (tmp)
	{
		printf("Valeur %d\n", tmp->value);
		tmp = tmp->next;
	}
}

t_list	*StackGeneration(int lstlen, int *lst)
{
	t_list	*a;

	a = NULL;
	Createchain(&a, lst, lstlen);
	PrintfChain(&a);
	if (ft_lstsize(a) <= 5)
		free(lst);
	return(a);
}