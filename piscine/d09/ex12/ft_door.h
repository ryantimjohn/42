/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 15:27:27 by tryan             #+#    #+#             */
/*   Updated: 2018/03/23 15:39:48 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H
# define CLOSE 0
# define TRUE 1
# define OPEN 1
# define EXIT_SUCCESS 0
# include <unistd.h>

typedef	struct	s_door
{
	int		state;
}				t_door;

typedef	int	t_bool;

#endif
