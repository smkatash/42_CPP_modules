/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:48:14 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/09 21:04:16 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat"), _brain(new Brain()) {
	std::cout << "AAnimal Cat is constructed" << std::endl;
}

Cat::Cat(std::string type) : AAnimal(type), _brain(new Brain()) {
	std::cout << "Cat " << type << " constructor called" << std::endl;
}

Cat::~Cat() {
	delete this->_brain;
	std::cout << "Cat " << this->_type << " is destroyed"<< std::endl;
}

Cat::Cat(const Cat& Parent) : AAnimal(Parent) {
	this->_brain = new Brain(*Parent._brain);
	std::cout << "Cat copy constructor called on " << Parent._type << std::endl;
}

Cat& Cat::operator=(const Cat& cpyParent) {
	this->_brain = new Brain(*cpyParent._brain);
	this->_type = cpyParent._type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "<<Meow - Meow>>" << std::endl;
}

Brain* Cat::getBrain() const
{
	return this->_brain;
}