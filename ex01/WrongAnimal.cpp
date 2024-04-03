/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 20:11:39 by mburgler          #+#    #+#             */
/*   Updated: 2024/04/01 20:11:40 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("unspecified WrongAnimal")
{
	std::cout << "Default Constructor called for WrongAnimal" << std::endl;
}


WrongAnimal::WrongAnimal(const std::string& type) : _type(type)
{
	std::cout << "Param Constructor called for WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& ref)
{
	std::cout << "Copy constructor called for WrongAnimal"<<std::endl;
	*this = ref;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Destructor called for WrongAnimal"<<std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& ref)
{
	std::cout << "Copy assignment operator called for WrongAnimal"<<std::endl;
	if (&ref != this) {
		this->_type = ref._type;
	}
	return *this;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "*cute sounds*" << std::endl;
}

std::string	WrongAnimal::getType() const 
{
	return _type;
}
