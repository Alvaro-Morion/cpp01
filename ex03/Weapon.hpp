/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:26:54 by amorion-          #+#    #+#             */
/*   Updated: 2022/03/26 13:38:34 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include<iostream>
class	Weapon
{
	public:
	
		Weapon();
		Weapon(std::string type);
		~Weapon();

		std::string&	getType(void);
		void	setType(std::string type);
	private:

		std::string _type;
};
#endif

