/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 11:51:49 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/25 16:58:08 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"

int	main()
{
	std::cout << "TEST FOR CLAPTRAP" << std::endl << std::endl;

	ClapTrap	Warrior_1("Maximus");
	ClapTrap	Warrior_2;

	Warrior_1.attack("Emperor");
	Warrior_1.takeDamage(5);
	Warrior_1.takeDamage(5);
	//Warrior_1 died
	Warrior_1.takeDamage(1);
	Warrior_1.beRepaired(5);
	for (size_t i = 0; i < 10; i++)
	{
		Warrior_2.attack("Jean");
	}
	//Warrior_2 doesn't have energy points left
	Warrior_2.attack("Jean");
	std::cout << std::endl << std::endl;
	std::cout << "TEST FOR SCAVTRAP" << std::endl << std::endl;
	ScavTrap	Warrior_3("Achille");
	ScavTrap	Warrior_4;

	Warrior_3.attack("Hector");
	Warrior_3.takeDamage(50);
	Warrior_3.beRepaired(5);
	Warrior_3.takeDamage(55);
	//Warrior_3 died
	Warrior_3.takeDamage(1);
	Warrior_3.beRepaired(5);
	Warrior_3.guardGate();
	std::cout << std::endl;
	for (size_t i = 0; i < 50; i++)
	{
		Warrior_4.attack("Claude");
	}
	//Warrior_4 doesn't have energy points left
	Warrior_4.attack("Claude");
	std::cout << std::endl;
	Warrior_4.guardGate();
	Warrior_4.guardGate();
}