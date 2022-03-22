/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 09:30:03 by amorion-          #+#    #+#             */
/*   Updated: 2022/03/22 10:17:00 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	int i;
	Zombie *Horde;
	if(N < 0)
		return(0);
	Horde = new Zombie[N];
	
	i = 0;
	while(i < N)
	{
		Horde[i].set_name(name);
		i++;
	}
	return(Horde);
}
