/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:46:16 by amorion-          #+#    #+#             */
/*   Updated: 2022/03/22 14:01:30 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HUmanB.hpp"

int main(void)
{
	Weapon	w("pistol");
	Weapon w1("Punch");
	HumanA	HA1("Juán", w);
	HumanA	HA2("Pedro", w1);
	HumanB	HB1;
	HumanB	HB2;
	
	std::cout << "\t WEAPON CLASS \t\n";
	std::cout << w.getType() << std::endl;
	w.setType("knife");
	std::cout << w.getType() << std::endl;
	
	std::cout << "\t HUMAN A CLASS\t\n";
	HA1.attack();
	HA2.attack();
	
	std::cout << "\t HUMAN B CLASS\t\n";
	HB1.attack();
	HB2.attack();
	return(0);
}
