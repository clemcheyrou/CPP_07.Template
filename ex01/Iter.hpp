/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccheyrou <ccheyrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 18:00:11 by ccheyrou          #+#    #+#             */
/*   Updated: 2023/09/04 12:35:25 by ccheyrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

# include <iostream>

template< typename T, typename C >
void iter(T *tab, int size, void (*pf)(C&))
{
	if (size > 0)
	{
		for (int i = 0; i < size; i++)
			pf(tab[i]);
	}
	else
		return;
};

// template< typename T >
// void print(T & x)
// {
// 	std::cout << x << std::endl;
// 	return;
// };


#endif