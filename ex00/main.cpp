/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:08:09 by amorion-          #+#    #+#             */
/*   Updated: 2022/03/20 14:45:41 by amorion-         ###   ########.fr       */
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
{
	atexit(ft_leaks);
	Zombie *z = newZombie("Pepe");

	randomChump("Juán");
	delete z;
	return (0);
}
