/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:13:33 by amorion-          #+#    #+#             */
/*   Updated: 2022/07/16 11:49:44 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str="HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "Usando la string: " << &str << std::endl;
	std::cout << "Usando el puntero: " << stringPTR << std::endl;
	std::cout << "Usando la referencia: " << &stringREF << std::endl;
	std::cout << "Usando la string: " << str << std::endl;
	std::cout << "Usando el puntero: " << *stringPTR << std::endl;
	std::cout << "Usando la referencia: " << stringREF << std::endl;
	return(0);
}
