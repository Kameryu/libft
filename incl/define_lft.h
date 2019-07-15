/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define_lft.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msorin <msorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 13:42:43 by msorin            #+#    #+#             */
/*   Updated: 2019/07/15 13:43:12 by msorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINE_LFT_H
# define DEFINE_LFT_H

# include <stddef.h>

# define BUFF_SIZE 256
# define D_HEX_UC "0123456789ABCDEF"
# define D_HEX_LC "0123456789abcdef"

typedef struct s_list	t_list;

struct		s_list
{
	void	*content;
	size_t	content_size;
	t_list	*next;
};

#endif