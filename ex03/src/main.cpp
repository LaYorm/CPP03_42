/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 11:51:49 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/26 17:08:45 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"
#include "../include/DiamondTrap.hpp"

int	main()
{
	std::cout << "TEST FOR CLAPTRAP" << std::endl << std::endl;

	ClapTrap	Warrior_1("Maximus");
	ClapTrap	Warrior_2;
	ScavTrap	Warrior_3("Achille");
	ScavTrap	Warrior_4;
	FragTrap	Warrior_5("Luke");
	FragTrap	Warrior_6;
	DiamondTrap	Warrior_7("Jozu");
	DiamondTrap	Warrior_8;
	
	std::cout << std::endl << std::endl;
	Warrior_1.attack("Emperor");
	Warrior_1.takeDamage(5);
	Warrior_1.takeDamage(5);
	//Warrior_1 died
	Warrior_1.takeDamage(1);
	Warrior_1.beRepaired(5);
	std::cout << std::endl;
	for (size_t i = 0; i < 10; i++)
	{
		Warrior_2.attack("Jean");
	}
	//Warrior_2 doesn't have energy points left
	Warrior_2.attack("Jean");
	std::cout << std::endl << std::endl;
	std::cout << "TEST FOR SCAVTRAP" << std::endl << std::endl;

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
	Warrior_4.takeDamage(100);	
	Warrior_4.guardGate();
	std::cout << std::endl << std::endl;
	std::cout << "TEST FOR FragTrap" << std::endl << std::endl;

	Warrior_5.attack("Vador");
	Warrior_5.takeDamage(50);
	Warrior_5.beRepaired(5);
	Warrior_5.takeDamage(55);
	//Warrior_5 died
	Warrior_5.takeDamage(1);
	Warrior_5.beRepaired(5);
	std::cout << std::endl;
	for (size_t i = 0; i < 100; i++)
	{
		Warrior_6.attack("Obi-Wan");
	}
	//Warrior_6 doesn't have energy points left
	Warrior_6.attack("Yoda");
	Warrior_5.highFivesGuys();
	std::cout << std::endl << std::endl;
	std::cout << "TEST FOR DiamondTrap" << std::endl << std::endl;
	
	Warrior_7.whoAmI();
	DiamondTrap	Warrior_clone(Warrior_7);
	Warrior_clone.whoAmI();
	Warrior_8 = Warrior_7;
	Warrior_8.whoAmI();
	Warrior_7.attack("Aokiji");
	Warrior_7.takeDamage(50);
	Warrior_7.beRepaired(5);
	Warrior_7.takeDamage(55);
	//Warrior_7 died
	Warrior_7.takeDamage(1);
	Warrior_7.beRepaired(5);
	Warrior_clone.guardGate();
	Warrior_7.guardGate();
	Warrior_8.highFivesGuys();
	std::cout << std::endl;
	for (size_t i = 0; i < 100; i++)
	{
		Warrior_8.attack("Teach");
	}
	//Warrior_8 doesn't have energy points left
	Warrior_8.attack("Burgess");
}