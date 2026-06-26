/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 11:36:56 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/26 16:58:30 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ScavTrap(), FragTrap()
{
	std::cout << "Diamond Default Constructor Called" << std::endl;
	this->_attack = FragTrap::_attack_static;
	this->_energy = ScavTrap::_energy_static;
	this->_hit_pts = FragTrap::_hit_pts_static;
	return ;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor Called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	std::cout << "Diamond Constructor Called for " << name << std::endl;
	this->_name = name;
	this->_attack = FragTrap::_attack_static;
	this->_energy = ScavTrap::_energy_static;
	this->_hit_pts = FragTrap::_hit_pts_static;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &other): ClapTrap(other), ScavTrap(other), FragTrap(other) 
{
	std::cout << "Diamond Copy Constructor Called" << std::endl;
	*this = other;
	return ;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &other)
{
	ClapTrap::operator=(other);
	this->_name = other._name;
	return (*this);
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
	return ;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Diamond Name: " << this->_name << std::endl;
	std::cout << "ClapTrap Name: " << ClapTrap::_name << std::endl;
	return ;
}
