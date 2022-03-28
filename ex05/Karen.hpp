/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:05:58 by amorion-          #+#    #+#             */
/*   Updated: 2022/03/28 18:09:12 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP
# include <iostream>

class	Karen
{
	public:
		Karen();
		~Karen();

		void	complain(std::string level) const;
	private:
		void	debug(void) const;	
		void	info(void)	const;
		void	warning(void)	const;
		void	error(void)	const;
};
#endif
