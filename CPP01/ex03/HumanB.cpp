/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 16:14:07 by yaperalt          #+#    #+#             */
/*   Updated: 2026/10/06 04:36:22 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::~HumanB() {}

HumanB::HumanB(std::string name) : name(name) {}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack()
{
	if (this->weapon == NULL)
		std::cout << "No weapon" << std::endl;
	else
	{
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	}
}