/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 16:14:05 by yaperalt          #+#    #+#             */
/*   Updated: 2026/10/06 04:34:54 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon){}

HumanA::~HumanA(){}

void HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
