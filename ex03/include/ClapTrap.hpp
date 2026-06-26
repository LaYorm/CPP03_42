/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 14:04:16 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/26 15:48:23 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string		_name;
		unsigned int	_hit_pts;
		unsigned int	_energy;
		unsigned int	_attack;
		
	public:
		ClapTrap();
		virtual	~ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &other);
		ClapTrap	&operator=(ClapTrap const &other);
		
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif