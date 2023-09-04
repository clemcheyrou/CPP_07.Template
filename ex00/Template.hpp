/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccheyrou <ccheyrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 18:00:11 by ccheyrou          #+#    #+#             */
/*   Updated: 2023/08/29 17:54:49 by ccheyrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_H
# define TEMPLATE_H

# include <iostream>

template< typename T >
T const & max( T const & x, T const & y )
{
	return ( x>=y ? x : y );
};

template< typename T >
T const & min( T const & x, T const & y )
{
	return ( x<=y ? x : y );
};

template< typename T >
void swap( T& x, T& y )
{
	T tmp;
	tmp = x;
	x = y;
	y = tmp;
};

#endif