/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: opelser <opelser@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/21 22:42:48 by opelser       #+#    #+#                 */
/*   Updated: 2023/03/27 19:04:20 by opelser       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include "push_swap.h"
#include <unistd.h>

#define INVALID_ARGS_MSG "\n\t\t\tInvalid arguments\n\n\
./push_swap \"[integers]\"\tor\t./push_swap [int] [int] [int]\n\n"

int	main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	write(1, "Hello\n", 7);
	return (0);
}
