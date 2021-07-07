/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 18:12:24 by ereali            #+#    #+#             */
/*   Updated: 2021/07/07 14:15:24 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

# include "../libft/libft.h"

// typedef struct		s_list
// {
// 	int				value;
// 	struct s_list	*next;
// }					t_list;
void	PrintfChain(t_list	**root);

int		main(int argc, char **argv);
int		*ErrorGest(char *args);
int		*atoitab(char **tab);
void	strisdigit(char *args);
char	*ft_cpy(char const *s1, char const *s2);
int		lentab(char **tab);
int		ft_isspace(char c);
char	*strjoinspace(char *s1, char const *s2);
int		*Createlst(char **argv, int argc);
void	freetab(char **tab, int i);
void	ExitError(void);
int		ft_atof(char *str);

t_list	*SecondToLast(t_list **stack);
t_list	*GetLastStack(t_list **stack);
void	Swap(t_list **stack);
void	SwapAll(t_list **stackA, t_list **stackB);
void	Rotate(t_list **stack);
void	RotateAll(t_list **stackA, t_list **stackB);
void	ReverseRotate(t_list **stack);
void	ReverseRotateAll(t_list **stackA, t_list **stackB);
void	Push(t_list **stack1, t_list **stack2);

t_list	*StackGeneration(int lstlen, int *lst);
void	Createchain(t_list **root, int *lst, int lstlen);

void	Sort3(int *lst, int len);


void	Shortsort(t_list **root);

#endif
