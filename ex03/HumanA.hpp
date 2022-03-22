/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:07:05 by amorion-          #+#    #+#             */
/*   Updated: 2022/03/22 12:30:46 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.h"

class	HumanA
{
	public:
		HumanA(name, std::string weapon);
		~HumanA();

		attack();
		std::string	name;
		Weapon weapon
}
