/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 23:26:34 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/27 09:15:38 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ScavTrap.hpp"
#include "include/FragTrap.hpp"
#include "include/DiamondTrap.hpp"

int main()
{
	ClapTrap	harry("Harry");
	ClapTrap	hermione("Hermione");
	ClapTrap	ron("Ron");
	ScavTrap	hagrid("Hagrid");
	FragTrap	snape("Pr. Snape");
	DiamondTrap	luna("Luna");

	harry.attack("Voldemort");
	harry.attack("Malfoy");
	harry.attack("Draco");
	harry.takeDamage(5);
	hermione.takeDamage(9);
	hermione.takeDamage(10);
	ron.beRepaired(10);
	ron.takeDamage(19);
	hagrid.attack("Voldemort");
	hagrid.takeDamage(99);
	hagrid.beRepaired(50);
	hagrid.guardGate();
	snape.attack("Voldemort");
	snape.takeDamage(99);
	snape.beRepaired(50);
	snape.highFivesGuys();
	luna.attack("Draco");
	luna.takeDamage(5);
	luna.beRepaired(3);
	luna.guardGate();
	luna.highFivesGuys();
	luna.whoAmI();
}