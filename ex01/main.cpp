/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 09:36:05 by amorion-          #+#    #+#             */
/*   Updated: 2022/03/22 10:16:57 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name);

int	ft_atoi(const char *nptr)
{
	int	n;
	int	s;

	n = 0;
	s = 1;
	while (*nptr == ' ' || *nptr == '\n' || *nptr == '\t' || *nptr == '\v'
			|| *nptr == '\f' || *nptr == '\r')
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			s = -1;
		nptr++;
	}
	while (*nptr <= '9' && *nptr >= '0')
	{
		n = n * 10 + *nptr - '0';
		nptr++;
	}
	return (n * s);
}

int	main(void)
{
	std::string input;
	Zombie *Horde;
	int i;
	int N;

	while(1)
	{
		std::cout <<  "Enter Number of Zombies:"; 
		std::getline(std::cin, input);
		N = ft_atoi(input.c_str());
		if(N > 0)
			break;
		std::cout << "Invalid argument\n";
	}
	std::cout << "Enter name:";
	std::getline(std::cin, input);
	Horde = zombieHorde(N, input);
	i = 0;
	while(i < N)
	{
		Horde[i].announce();
		i++;
	}
	delete[] Horde;
	return(0);
}
