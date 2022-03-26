/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 13:19:41 by amorion-          #+#    #+#             */
/*   Updated: 2022/03/26 13:50:17 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{}

HumanB::~HumanB()
{}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack(void)
{
	if(_weapon)
		std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}
