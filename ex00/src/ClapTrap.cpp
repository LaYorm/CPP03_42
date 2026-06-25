/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 14:05:24 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/25 10:55:52 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("Default"), _hit_pts(10), _energy(10), _attack(0)
{
	std::cout << "Default Constructor Called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hit_pts(10), _energy(10), _attack(0)
{
	std::cout << "ClapTrap Constructor called for " << _name << std::endl;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Desctructor Called for " << _name << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	*this = other;
	return ;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &other)
{
	this->_name = other._name;
	this->_attack = other._attack;
	this->_energy = other._energy;
	this->_hit_pts = other._hit_pts;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_hit_pts <= 0)
		std::cout << "ClapTrap " << this->_name << " is not able to attack " << target << " because he doesn't have enough hit points left." << std::endl;
	else if (this->_energy <= 0)
		std::cout << "ClapTrap " << this->_name << " is not able to attack " << target << " because he doesn't have enough energy points left." << std::endl;		
	else
	{
		this->_energy--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack << " points of damage. ";
		std::cout << this->_name << " has now " << this->_energy << " energy points left." << std::endl;
	}
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_pts <= 0)
		std::cout << "ClapTrap " << this->_name << ": \"Stop kicking my ass i'm already dead !\"" << std::endl;
	else
	{
		if (this->_hit_pts <= amount)
		{
			this->_hit_pts = 0;
			std::cout << "ClapTrap " << this->_name << " took a hit and lost " << amount << " hit point." << std::endl;
			std::cout << "ClapTrap " << this->_name << ": \"Aaaaargh, you killed me !\"" << std::endl;
		}
		else
		{
			this->_hit_pts -= amount;
			std::cout << "ClapTrap " << this->_name << " took a hit and lost " << amount << " hit point. He still has "
				<< this->_hit_pts << " hit points." << std::endl;
		}
	}
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy <= 0)
		std::cout << "ClapTrap " << this->_name << " can't be healed. He doesn't have enough energy points left." << std::endl;
	else if (this->_hit_pts <= 0)
		std::cout << "ClapTrap " << this->_name << " can't be healed. He's already dead!" << std::endl;
	else
	{
		this->_energy--;
		if (this->_hit_pts + amount > 10)
		{
			this->_hit_pts = 10;
			std::cout << "ClapTrap " << this->_name << " has healed himself and now has maximum hit points." << std::endl;			
		}
		else
		{
			this->_hit_pts += amount;
			std::cout << "ClapTrap " << this->_name << " healed himself for " << amount << " hit points." << std::endl;
		}
	}
	return ;
}
