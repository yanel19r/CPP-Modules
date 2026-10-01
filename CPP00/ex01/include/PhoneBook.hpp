/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 00:52:55 by yaperalt          #+#    #+#             */
/*   Updated: 2026/10/01 17:19:06 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class PhoneBook {
private:
    Contact _contacts[8];
    int _totalContacts;
    int _oldestIndex;

    std::string _formatColumn(const std::string &str) const;

public:
    PhoneBook();
    ~PhoneBook();
    void addContact();
    void searchContact() const;
    
};

#endif