/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:31:29 by amorion-          #+#    #+#             */
/*   Updated: 2022/03/22 12:09:51 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : _type("club")
{}

Weapon::Weapon(std::string type) : _type(type)
{}

Weapon::~Weapon()
{
	std::cout << "Weapon Destroyed\n";
	return;
}

std::string&	Weapon::getType(void)
{ 
	std::string& type = _type;
	return(type);
}

void	Weapon::setType(std::string type)
{
	_type = type;
}
