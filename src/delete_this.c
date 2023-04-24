/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   delete_this.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: opelser <opelser@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/28 19:13:39 by opelser       #+#    #+#                 */
/*   Updated: 2023/04/24 14:58:05 by opelser       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"
#include <stdio.h>

void	print_list(t_node *node, char stack)
{
	printf("%c\n", stack);
	while (node != NULL)
	{
		// printf("%p -> ", node);
		// printf("[%p] : ", node->previous);
		printf("\e[0;32m%d\e[0m : ", node->value);
		// printf("[%p]\n", node->next);
		node = node->next;
	}
	printf("\n");
}

void	check_for_leaks(void)
{
	write(1, "\n\n\n", 3);
	system("leaks -q push_swap");
}
