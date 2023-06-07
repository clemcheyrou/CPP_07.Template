/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementinecheyrou-lagreze <clementinech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:47:44 by clementinec       #+#    #+#             */
/*   Updated: 2023/06/07 12:49:49 by clementinec      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.tpp"

int main()
{
	Array<int> integer(15);
	for (int i = 0; i < 15; i++)
		integer[i] = 1;
		
	Array<int> tmp = integer;
	for (int i = 0; i < 15; i++)
		std::cout << tmp[i] << " ";
	std::cout << std::endl;

	Array<int> tmp2(tmp);
	for (int i = 0; i < 15; i++)
		std::cout << tmp2[i] << " ";
	std::cout << std::endl;
	
	try
	{
		tmp[16] = 0;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}