/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:22:56 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/21 17:59:09 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

Weapon::Weapon(std::string type) {
	this->_type = type;
}

Weapon::~Weapon() {
	std::cout << this->_type << " has been destroyed." << std::endl;
}

void	Weapon::setType(std::string type) {
	this->_type = type;
}

std::string	&Weapon::getType() {
	return (this->_type);
}
