/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 16:14:10 by yaperalt          #+#    #+#             */
/*   Updated: 2026/10/06 04:20:55 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type){}

Weapon::~Weapon() {}

#include "Weapon.hpp"

void Weapon::setType(std::string type) {
    this->type = type;
}

const std::string& Weapon::getType(void) {
    return this->type;
}
