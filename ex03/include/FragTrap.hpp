/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 10:47:17 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/26 16:54:58 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
		FragTrap();
		~FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const &other);
		FragTrap	&operator=(FragTrap const &other);

		void	highFivesGuys(void);

	protected:
		static const unsigned int	_hit_pts_static = 100;
		static const unsigned int	_energy_static = 100;
		static const unsigned int	_attack_static = 30;
};

#endif