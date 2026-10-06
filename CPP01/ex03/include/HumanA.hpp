/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 16:40:50 by yaperalt          #+#    #+#             */
/*   Updated: 2026/10/06 04:33:53 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
private:
    std::string name;
    Weapon& weapon;
public:
    HumanA(std::string name, Weapon& weapon);
    ~HumanA();
    void attack();
};

#endif