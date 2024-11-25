/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:48:09 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/25 16:23:19 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int main(void)
{
	ClapTrap herbert("Herbert");
	ClapTrap mirko("Mirko");

	herbert.attack("Mirko");
	mirko.takeDamage(0);
	mirko.beRepaired(50);
	mirko.attack("Herbert");
	herbert.takeDamage(0);
	mirko.attack("Herbert");
	mirko.attack("Herbert");
	mirko.attack("Herbert");
	mirko.attack("Herbert");
	mirko.attack("Herbert");
	mirko.attack("Herbert");
	mirko.attack("Herbert");
	mirko.attack("Zombie");
	mirko.attack("Herbert");
	mirko.attack("Herbert");
	mirko.takeDamage(45);
	mirko.takeDamage(45);
}