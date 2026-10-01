/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 02:37:43 by yaperalt          #+#    #+#             */
/*   Updated: 2026/10/01 17:25:33 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// : (initializer list, most efficient way to asign a value to data members
PhoneBook::PhoneBook(): _totalContacts(0), _oldestIndex(0) {}

PhoneBook::~PhoneBook() {}

void PhoneBook::searchContact() const {
    
}