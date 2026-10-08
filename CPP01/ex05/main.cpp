/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 16:22:30 by yaperalt          #+#    #+#             */
/*   Updated: 2026/10/06 17:09:48 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int main(void)
{
	Harl	harl;
	
	std::cout<< "DEBUG" << std::endl;
	harl.complain("DEBUG");
	std::cout<< "INFO" << std::endl;
	harl.complain("INFO");
	std::cout<< "WARNING" << std::endl;
	harl.complain("WARNING");
	std::cout<< "ERROR" << std::endl;
	harl.complain("ERROR");
	return (0);
}
