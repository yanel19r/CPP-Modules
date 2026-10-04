/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 14:18:00 by yaperalt          #+#    #+#             */
/*   Updated: 2026/10/04 14:39:05 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>


class Weapon {
private:
    std::string type;       
public:
    Weapon();
    ~Weapon();
    const std::string& getType();
    void setType(std::string type);

};

#endif