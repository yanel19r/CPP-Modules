/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 20:32:58 by yaperalt          #+#    #+#             */
/*   Updated: 2026/10/04 02:50:50 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"
 
int main(void) {

    std::cout << "Initializing zombie horde\n";
    Zombie* horde = zombieHorde(7, "Gerardo");

    for (int i = 0; i < 7; i++) { 
        horde[i].announce();
    }

    delete [] horde;
}
