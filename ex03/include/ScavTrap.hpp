/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 11:55:21 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/26 16:54:27 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	private:
		bool	_g_gate;
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap	(ScavTrap const &other);
		ScavTrap(std::string name);
		ScavTrap	&operator=(ScavTrap const &other);

		void	attack(const std::string &target);
		void	guardGate();

	protected:
		static const unsigned int	_hit_pts_static = 100;
		static const unsigned int	_energy_static = 50;
		static const unsigned int	_attack_static = 20;
};

#endif