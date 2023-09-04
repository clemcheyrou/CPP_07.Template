/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccheyrou <ccheyrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:15:49 by clementinec       #+#    #+#             */
/*   Updated: 2023/08/29 18:17:53 by ccheyrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(void) : _elem(NULL), _size(0)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

template <typename T>
Array<T>::~Array(void)
{
	std::cout << "Destructor called" << std::endl;
	delete[] _elem;
	return;
}

template <typename T>
Array<T>::Array(unsigned int nb) : _elem(new T[nb]), _size(nb)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

template <typename T>
Array<T>::Array(Array<T> const &copy) : _elem(new T[copy._size]), _size(copy._size)
{
	std::cout << "Constructor copy called" << std::endl;
	for (size_t i = 0; i < copy._size; i++)
		_elem[i] = copy._elem[i];
	return;
}

template <typename T>
Array<T> &Array<T>::operator=(Array<T> const &rhs)
{
	std::cout << "Operator assignation" << std::endl;
	if (this != &rhs)
	{
		delete []_elem;
		_elem = new T[rhs._size];
		for (size_t i = 0; i < rhs._size; i++)
			_elem[i] = rhs._elem[i];
		_size = rhs._size;
	}
	return (*this);
}

template <typename T>
T	&Array<T>::operator [](size_t index) const
{
	if (index < 0 || index >= _size)
		throw (std::out_of_range("Wrong index"));
	return (_elem[index]);
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (_size);
}