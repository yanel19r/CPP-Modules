/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 16:40:44 by yaperalt          #+#    #+#             */
/*   Updated: 2026/10/06 04:35:24 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
private:
    std::string name;
    Weapon* weapon;
public:
    HumanB(std::string name);
    ~HumanB();
    void attack();
    void setWeapon(Weapon& weapon);
};


#endif