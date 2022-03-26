/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 13:16:39 by amorion-          #+#    #+#             */
/*   Updated: 2022/03/26 13:50:15 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
class	HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();
		
		void	setWeapon(Weapon &weapon);
		void	attack(void);
	private:
		std::string	_name;
		Weapon *_weapon;
};
#endif
