/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccheyrou <ccheyrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 18:09:41 by ccheyrou          #+#    #+#             */
/*   Updated: 2023/09/04 11:30:00 by ccheyrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Template.hpp"

int main()
{
	{
		int a = 5;
		int b = 10;
		
		std::cout << "Max of " << a << " and " << b << std::endl;
		std::cout << ::max(a,b) << std::endl;

		std::cout << "Min of " << a << " and " << b << std::endl;
		std::cout << ::min(a,b) << std::endl;

		std::cout << "Before : a = " << a << " and b = " << b << std::endl;
		::swap(a,b);
		std::cout << "After : a = " << a << " and b = " << b << std::endl;
	}
	{
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}

	return (0);
}