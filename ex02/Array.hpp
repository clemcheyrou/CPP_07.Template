/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementinecheyrou-lagreze <clementinech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:47:42 by clementinec       #+#    #+#             */
/*   Updated: 2023/06/07 12:44:40 by clementinec      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>

template <typename T>
class Array
{
private:
	T				*_elem;
	unsigned int	_size;
	
public:
	Array(void);
	Array(unsigned int);
	Array(Array<T> const &copy);
	~Array(void);

	Array 	&operator=(Array<T> const &rhs);
	T		&operator[](size_t index) const;

	unsigned int size() const;
};

#endif