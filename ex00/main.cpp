/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:08:09 by amorion-          #+#    #+#             */
/*   Updated: 2022/03/22 13:36:05 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

void	ft_leaks(void)
{
	system("leaks BrainZ");
}

int main(void)
{;
	Zombie *z = newZombie("Pepe");

	randomChump("Juán");
	z->announce();
	delete z;
	return (0);
}
