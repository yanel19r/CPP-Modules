/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 02:56:43 by yaperalt          #+#    #+#             */
/*   Updated: 2026/10/04 03:26:42 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/**
 * Una referencia no es un objeto. En el estándar de C++, una referencia es simplemente 
 * un alias (un apodo) para una variable existente.
 * El compilador, en la mayoría de los casos, implementa las referencias usando punteros 
 * constantes (Tipo * const) por detrás, pero a nivel de lenguaje, la referencia no tiene 
 * su propia dirección de memoria. Si intentas obtener la dirección de una referencia con 
 * &ref, el compilador te devolverá la dirección de la variable original, no de la referencia en sí.
 */
#include <iostream>
#include <string>

int main() {
    std::string str = "HI THIS IS BRAIN";

    std::string* stringPTR = &str;

    std::string& stringREF = str;

    std::cout << "Direcciones de memoria:" << std::endl;
    std::cout << "Dirección de la variable string: " << &str << std::endl;
    std::cout << "Dirección guardada en stringPTR: " << stringPTR << std::endl;
    std::cout << "Dirección guardada en stringREF: " << &stringREF << std::endl;

    std::cout << "\n-----------------------------------\n" << std::endl;

    std::cout << "Valores:" << std::endl;
    std::cout << "Valor de la variable string:   " << str << std::endl;
    std::cout << "Valor apuntado por stringPTR:  " << *stringPTR << std::endl;
    std::cout << "Valor apuntado por stringREF:  " << stringREF << std::endl;

    return 0;
}


/*

1. Identidad propia:
	• El puntero tiene su propia dirección de memoria y su propio espacio ocupado.
	• La referencia comparte la identidad y la dirección de la variable original.
2. Nulidad:
	• Un puntero puede ser "nadie" (nullptr).
	• Una referencia no puede ser nula. Siempre debe referenciar a algo real desde el momento en que nace.
3. Ciclo de vida / Reasignación:
	• Un puntero puede cambiar de opinión y apuntar a otra variable a mitad del programa.
	• Una referencia se casa de por vida con la variable con la que fue inicializada. Si 
    intentas "reasignarla" con ref = otra_variable;, lo que estás haciendo en realidad es cambiar el valor de 
    la variable original.

*/
