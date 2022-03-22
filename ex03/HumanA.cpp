/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:10:18 by amorion-          #+#    #+#             */
/*   Updated: 2022/03/22 12:30:43 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(type) : name(name), _weapon(type);
{}

HumanA::~Human()
{
	std::cout << "HumanA destroyed\n";
	return;
}

void	HumanA::attack()
{
	std::cout << 
}
