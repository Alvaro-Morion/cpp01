/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:46:16 by amorion-          #+#    #+#             */
/*   Updated: 2022/03/22 12:30:40 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

int main()
{
	Weapon	w("pistol");
	HumanA	HA1;
	HumanB	HB;
	
	std::cout << "\t WEAPON CLASS \t\n";
	std::cout << w.getType() << std::endl;
	w.setType("knife");
	std::cout << w.getType() << std::endl;
	return(0);
}
