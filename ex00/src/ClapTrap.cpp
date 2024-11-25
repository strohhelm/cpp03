/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 14:36:54 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/25 17:11:54 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

/* ************************************************************************** */
/*		CONSTRUCTORS, DESTRUCTORS											  */
/* ************************************************************************** */

//Default constructor
ClapTrap::ClapTrap()
	:_name(nullptr), _health_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout<<"Default constructor called!"<<std::endl;
}
/*----------------------------------------------------------------------------*/

// Initializing constructor
ClapTrap::ClapTrap(std::string name)
	:_name(name), _health_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout	<<"Name setting constructor called: "
				<<Y<<name<<X
				<<" was constructed!"
				<<std::endl;
}
/*----------------------------------------------------------------------------*/

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap& original)
{
	*this = original;
	std::cout<<"Copy constructor called"<<std::endl;
}
/*----------------------------------------------------------------------------*/


// Default destructor
ClapTrap::~ClapTrap()
{
	std::cout<<"Default destructor called"<<std::endl;
}


/* ************************************************************************** */
/*		OPERATOR OVERLOADS													  */
/* ************************************************************************** */

ClapTrap& ClapTrap::operator=(const ClapTrap& original)
{
	this->_energy_points = original._energy_points;
	this->_health_points = original._health_points;
	this->_attack_damage = original._attack_damage;
	std::cout<<"Copy assignment operator called"<<std::endl;
	return *this;
}


/* ************************************************************************** */
/*			MEMBER FUNCTIONS												  */
/* ************************************************************************** */


void	ClapTrap::attack(const std::string& target)
{
	if (this->_energy_points > 0){
		std::cout	<<"ClapTrap "
					<<C<<this->_name<<X
					<<" attacks "
					<<C<<target<<X
					<<" causing "
					<<B<<this->_attack_damage<<X
					<<" points of damage!"
					<<std::endl;
		this->_energy_points--;
	}
	else {
		std::cout	<<"ClapTrap "
					<<R<<this->_name<<X
					<<" cant attack, it is out of health points!"
					<<std::endl;
	}
}
/*----------------------------------------------------------------------------*/


void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount < this->_health_points){
		this->_health_points -= amount;
		std::cout	<< M<<this->_name<<X
					<<" takes "
					<<B<<amount<<X
					<<" damage points!"
					<<std::endl;

	}
	else {
		std::cout	<<M<< this->_name<<X
					<<" takes "
					<<B<<this->_health_points<<X
					<<" damage points! It is now out of health!"
					<<std::endl;
		this->_health_points = 0;
	}
}
/*----------------------------------------------------------------------------*/


void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_health_points += amount;
	if (this->_energy_points > 0){
		this->_energy_points --;
	}
	else {
		std::cout	<<R<<this->_name<<X
					<<" cannot be repaired, it does not have enough energy points left!"
					<<std::endl;
	}
	std::cout	<<G<<this->_name<<X
				<<"'s health points were increased by "
				<<B<<amount<<X
				<<" points!"
				<<std::endl;
}
/*----------------------------------------------------------------------------*/


