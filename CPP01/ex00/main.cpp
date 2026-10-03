/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 20:32:58 by yaperalt          #+#    #+#             */
/*   Updated: 2026/10/04 01:34:19 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

/**
 * We can see that creating a zombie on the heap will make it persistent
 * unless it's deleted.
 * On the stack however, it is destroyed at the end of the execution of the
 * function.
 * The randomChump() function shows about the same behaviour, but inside its
 * own function, therefore before the main() has even finished executing.
 */
 
int main(void) {
    std::string zombie1 = "Juan Carlos";
    std::string zombie2 = "Pepe";

    Zombie* heap_zombie = newZombie(zombie1);
    heap_zombie->announce();

    Zombie stack_zombie(zombie2);
    stack_zombie.announce();

    ramdomChump("Bernardo");

    delete heap_zombie;
    
    return 0;
}
