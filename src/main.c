/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: opelser <opelser@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/21 22:42:48 by opelser       #+#    #+#                 */
/*   Updated: 2023/03/28 20:57:02 by opelser       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

#define ERROR "Error\n"

int	main(int argc, char **argv)
{
	t_node	first_node;
	char	**strings;

	atexit(check_for_leaks);
	first_node.next = NULL;
	strings = make_strings(argc, argv);
	if (!strings)
	{
		write(1, ERROR, sizeof(ERROR));
		return (1);
	}
	if (!args_to_list(strings, &first_node))
	{
		if (argc == 2)
			ft_free(strings);
		write(1, ERROR, sizeof(ERROR));
		free_list(first_node.next);
		return (2);
	}
	if (argc == 2)
		ft_free(strings);
	print_list(&first_node);
	free_list(first_node.next);
	return (0);
}
