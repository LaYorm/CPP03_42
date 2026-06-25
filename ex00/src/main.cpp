/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 14:17:28 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/25 10:48:48 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

int	main()
{
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
}