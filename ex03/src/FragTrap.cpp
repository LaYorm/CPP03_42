/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 10:47:52 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/26 11:18:00 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "FragTrap Default Constructor Called" << std::endl;
	this->_attack = 30;
	this->_energy = 100;
	this->_hit_pts = 100;
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor Called for " << this->_name << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &other): ClapTrap(other)
{
	*this = other;
	std::cout << "FragTrap Copy Constructor Called" << std::endl;
	return ;
}

FragTrap	&FragTrap::operator=(FragTrap const &other)
{
	ClapTrap::operator=(other);
	return (*this);
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap Constructor Called for " << name << std::endl;
	this->_attack = 30;
	this->_energy = 100;
	this->_hit_pts = 100;
	return ;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << ": \"Give me a high five dude !\" **CLAP** \"That's my man !\"" << std::endl;
	return ;
}
