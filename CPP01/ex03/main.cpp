/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 14:16:33 by yaperalt          #+#    #+#             */
/*   Updated: 2026/10/06 04:40:47 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

/**
1. Referencia a Weapon ➡️ Ideal para HumanA
• Por qué: El enunciado dice que HumanA siempre estará armado y recibe el arma directamente en su constructor.
• Comportamiento: Las referencias en C++ no pueden ser nulas (nullptr) y deben inicializarse obligatoriamente en el momento de su creación (usando la lista de inicialización del constructor). Además, una vez que una referencia apunta a un objeto, no puede cambiarse para que apunte a otro. Esto encaja perfectamente con el perfil de HumanA.
2. Puntero a Weapon ➡️ Ideal para HumanB
• Por qué: El enunciado especifica que HumanB no recibe el arma en el constructor y puede no tener un arma en ciertos momentos (empieza sin ella y se le asigna más tarde con setWeapon).
• Comportamiento: Los punteros pueden ser nulos (nullptr), lo que te permite representar la ausencia de un arma. También pueden ser reasignados en cualquier momento del ciclo de vida del objeto, lo que permite que HumanB cambie de arma o se quede desarmado más adelante si fuera necesario.

 */
int	main(void)
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return (0);
}
