/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 13:52:03 by amorion-          #+#    #+#             */
/*   Updated: 2022/07/16 11:47:24 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::Zombie(std::string name)
{
	_name = name;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << _name << " Destroyed\n";
	return;
}

void	Zombie::set_name(std::string name)
{
	_name = name;
}

void	Zombie::announce(void) const
{
	std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ...\n";
}
