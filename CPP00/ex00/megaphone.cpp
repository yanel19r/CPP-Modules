/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 02:40:22 by yz                #+#    #+#             */
/*   Updated: 2026/09/19 15:00:41 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

/**
 * std::endl es un manipulador de flujo que realiza dos acciones consecutivas:
 * 1. Inserta '\n'
 * 2. Vacia el bufer de salida(flush): Fuerza al SO a mostrar inmediatamente en 
 * pantalla todo el texto que este guardado en la memoria temporal(bufer).
 * Si utilizo std::endl dentro de un bucle que se repite muchas veces, tu
 * programa ira notablemente mas lento.
 * Por ello, mejor utilizar '\n' y utilizar std::endl de forma intencionada
 * cuando necesites asegurar absolutamente que el texto aparezca en la pantalla 
 * en ese milisegundo exacto (por ejemplo, al depurar un error antes de que el 
 * programa se cierre inesperadamente).
 */

int main(int argc, char *argv[])
{
    
    if (argc == 1) 
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return 0;
    }
    else 
    {
    for (int i = 1; i < argc; i++)
    {
        for (size_t j = 0; j < std::strlen(argv[i]); j++)
        {
            std::cout << (char)toupper(argv[i][j]);
        }
        if (i > 1)
        {
            std::cout << ' ';
        }
    }
    std::cout << '\n';
    }
    return 0;
}
