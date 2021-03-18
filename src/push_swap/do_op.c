/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 13:53:12 by kaye              #+#    #+#             */
/*   Updated: 2021/03/18 14:01:35 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_op(t_stack *stacks, char *op_name)
{
	const t_op	op[OP_AMOUT] = {
		{"sa", op_sa}, {"sb", op_sb}, {"ss", op_ss}, {"pa", do_pa},
		{"pb", op_pb}, {"ra", op_ra}, {"rb", op_rb}, {"rr", op_rr},
		{"rra", op_rra}, {"rrb", op_rrb}, {"rrr", op_rrr}
	};
	int			i;

	i = -1;
	while (++i < OP_AMOUT)
	{
		if (!ft_strcmp(op_name, op[i].name))
		{
			op[i].f(stacks);
			return ;
		}
		else
			quit(stacks, "ERROR\n", NULL);
	}
}