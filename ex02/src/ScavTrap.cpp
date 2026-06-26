/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 11:51:54 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/26 11:17:35 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	this->_attack = 20;
	this->_energy = 50;
	this->_hit_pts = 100;
	this->_g_gate = false;
	std::cout << "ScavTrap Default Constructor Called" << std::endl;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor Called for " << this->_name << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &other): ClapTrap(other)
{
	*this = other;
	std::cout << "ScavTrap Copy Constructor Called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_attack = 20;
	this->_energy = 50;
	this->_hit_pts = 100;
	this->_g_gate = false;
	std::cout << "ScavTrap  Constructor Called for " << name << std::endl;
	return ;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &other)
{
	ClapTrap::operator=(other);
	this->_g_gate = other._g_gate;
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_hit_pts <= 0)
		std::cout << "ScavTrap " << this->_name << ": \"Crap, I can't attack " << target << ". I'm already dead!\"" << std::endl;
	else if (this->_energy <= 0)
		std::cout << "ScavTrap " << this->_name << ": \"Nope, I won't attack " << target << ", I need a nap. I don't have any energy points left.\"" << std::endl;		
	else
	{
		this->_energy--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack << " points of damage. ";
		std::cout << this->_name << " has now " << this->_energy << " energy points left." << std::endl;
	}
	return ;
}

void	ScavTrap::guardGate()
{
	if (this->_hit_pts <= 0 && this->_g_gate)
		std::cout << "ScavTrap " << this->_name << " is dead, next to the gate. Somebody broke in !" << std::endl;
	else if (this->_hit_pts <= 0 && !this->_g_gate)
		std::cout << "ScavTrap " << this->_name << " is dead. He can't go guard the gate!" << std::endl;
	else if (this->_g_gate)
		std::cout << "ScavTrap " << this->_name << ": \"I'm already at the gate. Chill out for god sake !\"" << std::endl;
	else
	{
		this->_g_gate = true;
		std::cout << "ScavTrap " << this->_name << ": \"All right, I'll go guard the gate!\"" << std::endl;		
	}
}
