/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 02:37:43 by yaperalt          #+#    #+#             */
/*   Updated: 2026/10/02 18:30:47 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// : (initializer list, most efficient way to asign a value to data members)
PhoneBook::PhoneBook(): _totalContacts(0), _oldestIndex(0) {}

PhoneBook::~PhoneBook() {}

static bool getFieldInput(const std::string &prompt, std::string &field) {
    while (true) {
        std::cout << prompt;
        if (!std::getline(std::cin, field))
            return false;
        if(!field.empty())
            return true;
        std::cout << "Field cannot be empty. Please try again." << std::endl;
    }
}

void PhoneBook::addContact () {
    std::string fn, ln, nn, pn, secret;
    std::cout << "--- Adding New Contact ---" << std::endl;
    if (!getFieldInput("First name: ", fn)) return;
    if (!getFieldInput("Last name: ", ln)) return;
    if (!getFieldInput("Nickname: ", nn)) return;
    if (!getFieldInput("Phone Number: ", pn)) return;
    if (!getFieldInput("Darkest Secret: ", secret)) return;

    _contacts[_oldestIndex].setContact(fn, ln, nn, pn, secret);
    _oldestIndex = (_oldestIndex + 1) % 8;

    if (_totalContacts < 8)
        _totalContacts++;

    std::cout << "Contact saved successfully!" << std::endl;
}

std::string PhoneBook::_formatColumn(const std::string &str) const {
    if(str.length() > 10) {
        return str.substr(0, 9) + ".";
    }
    return str;
}

void PhoneBook::searchContact() const {
    if (_totalContacts == 0) {
        std::cout << "PhoneBook is empty. Use ADD first." << std::endl;
        return;
    }

    // Display table header
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;

    // Display rows
    for (int i = 0; i < _totalContacts; i++) {
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << _formatColumn(_contacts[i].getFirstName()) << "|"
                  << std::setw(10) << _formatColumn(_contacts[i].getLastName()) << "|"
                  << std::setw(10) << _formatColumn(_contacts[i].getNickname()) << std::endl;
    }

    // Prompt user for an index
    std::cout << "Enter the index of the contact to display: ";
    std::string input;
    if (!std::getline(std::cin, input))
        return;
    
    /**
     * std::stringstream ss(input); convierte el texto plano que escribió el usuario en un
     * flujo de datos (igual que si viniese de std::cin), permitiendo usar el operador de
     * extracción >>
     * lefover capturara cualquier caracter sobrante que no deba estar ahi
     */
    std::stringstream ss(input);
    int index = -1;
    char leftover;

    if (!(ss >> index) || (ss >> leftover) || index < 0 || index >= _totalContacts) {
        std::cout << "Invalid index!" << std::endl;
        return;
    }

    std::cout << "First Name: " << _contacts[index].getFirstName() << std::endl;
    std::cout << "Last Name: " << _contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << _contacts[index].getNickname() << std::endl;
    std::cout << "Phone Number: " << _contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << _contacts[index].getDarkestSecret() << std::endl;
    
}
