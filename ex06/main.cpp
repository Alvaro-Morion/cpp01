/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:39:20 by amorion-          #+#    #+#             */
/*   Updated: 2022/03/28 18:44:15 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
int	main(int argc, char **argv)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i = 0;
	Karen		karen;
	
	if(argc == 1)
	{
		std::cout << "Karen is silent\n";
		return(1);
	}
	if(argc > 2)
	{
		std::cout << "too many arguments\n";
		return(1);
	}
	std::string input = argv[1];
	while(i < 4 && levels[i].compare(input))
		i++;
	switch(i)
	{
		case 0 : 
		{
			std::cout << levels[0] << std::endl;
			karen.complain(levels[0]);
		}
		case 1 :
		{
			std::cout << levels[1] << std::endl;
			karen.complain(levels[1]);
		}
		case 2 :
		{
			std::cout << levels[2] << std::endl;
			karen.complain(levels[2]);
		}
		case 3 :
		{
			std::cout << levels[3] << std::endl;
			karen.complain(levels[3]);
		}
		break;
		default: 
			std::cout << "Karen is complaining about insiginigicant problems\n";
	}
	return(0);
}
