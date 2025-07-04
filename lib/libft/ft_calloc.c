/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viaremko <lodyiaremko@proton.me>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 18:19:53 by viaremko          #+#    #+#             */
/*   Updated: 2024/10/08 18:20:14 by viaremko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t total_size)
{
	void	*ptr;

	ptr = malloc(total_size);
	if (ptr == 0)
		return (0);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}
