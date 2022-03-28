/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:10:51 by amorion-          #+#    #+#             */
/*   Updated: 2022/03/28 18:09:09 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
};

Karen::~Karen()
{
	return;
}

void	Karen::complain(std::string level)	const
{
	int i = 0;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void(Karen::*function[4])() const = {&Karen::debug, &Karen::info,
		&Karen::warning, &Karen::error};

	while(i < 4 && level.compare(levels[i]))
		i++;
	if(i < 4)
		(this->*function[i])();
}

void	Karen::debug(void)	const
{
	std::cout << "I love to get extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger. ";
	std::cout << "I just love it!\n";
}

void	Karen::info(void)	const
{
	std::cout << "I cannot believe adding extra bacon cost more money. You ";
	std::cout << "don’t put enough! If you did I would not have to ask for ";
	std::cout << "it! \n";
}

void	Karen::warning(void)	const
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve ";
	std::cout << "been coming here for years and you just started working ";
	std::cout << "here last month.\n";
}

void	Karen::error(void)	const
{
	std::cout << "This is unacceptable, I want to speak to the manager now. \n";
}
