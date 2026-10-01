/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 18:08:44 by yaperalt          #+#    #+#             */
/*   Updated: 2026/10/01 17:26:37 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/PhoneBook.hpp"

int main(void) {
    
    PhoneBook phonebook;
    std::string buffer;

    while (true) {
        std::cout << "====================Welcome====================\n";
        std::cout << "The program only accepts ADD, SEARCH and EXIT.\n";
        std::cout << "Enter command: ";

        if (!std::getline(std::cin, buffer))
            break; // Handles Ctrl+D (EOF) gracefully
        
        if (buffer.empty()){
            continue;
        }

        if (buffer == "ADD") {
            phonebook.addContact();
        }
        else if (buffer == "SEARCH"){
            phonebook.searchContact();
        }
        else if (buffer == "EXIT") {
            break;
        }
        else {
            std::cout << "\nInvalid input: \"" << buffer << "\"\n";
            std::cout << "Please type exactly ADD, SEARCH, or EXIT.\n\n";
        }
    }
    std::cout << "Exiting program...\n";
    return 0;
}
