/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 22:04:20 by kaye              #+#    #+#             */
/*   Updated: 2021/03/17 19:32:39 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    do_pa(t_stack *stacks)
{
    op_pa(stacks);
    if (!stacks->flag_v)
        ft_putstr("pa\n");
    print_stack(stacks);
}

void    do_pb(t_stack *stacks)
{
    op_pb(stacks);
    if (!stacks->flag_v)
        ft_putstr("pb\n");
    print_stack(stacks);
}