/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:10:18 by amorion-          #+#    #+#             */
/*   Updated: 2022/03/22 14:31:52 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{}

HumanA::~HumanA(void)
{
	std::cout << "HumanA destroyed\n";
	return;
}

void	HumanA::attack(void)
{
	std::cout << _name  << " attacks with his " << _weapon.getType() << std::endl;
}
