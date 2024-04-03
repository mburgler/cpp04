/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:54:23 by mburgler          #+#    #+#             */
/*   Updated: 2024/04/01 20:01:13 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("unspecified Animal")
{
	std::cout << "Default Constructor called for Animal" << std::endl;
}


Animal::Animal(const std::string& type) : _type(type)
{
	std::cout << "Param Constructor called for Animal" << std::endl;
}

Animal::Animal(const Animal& ref)
{
	std::cout << "Copy constructor called for Animal"<<std::endl;
	*this = ref;
}

Animal::~Animal(void)
{
	std::cout << "Destructor called for Animal"<<std::endl;
}

Animal& Animal::operator=(const Animal& ref)
{
	std::cout << "Copy assignment operator called for Animal"<<std::endl;
	if (&ref != this) {
		this->_type = ref._type;
	}
	return *this;
}

void	Animal::makeSound() const
{
	std::cout << "*cute sounds*" << std::endl;
}

std::string	Animal::getType() const 
{
	return _type;
}
