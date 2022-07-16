/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:31:29 by amorion-          #+#    #+#             */
/*   Updated: 2022/07/16 11:53:16 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : _type("club")
{}

Weapon::Weapon(std::string type) : _type(type)
{}

Weapon::~Weapon()
{}

std::string const	& Weapon::getType(void)
{ 
	std::string& type = _type;
	return(type);
}

void	Weapon::setType(std::string type)
{
	_type = type;
}
