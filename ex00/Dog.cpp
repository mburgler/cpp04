/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:54:23 by mburgler          #+#    #+#             */
/*   Updated: 2024/04/01 19:52:44 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << "Default Constructor called for Dog" << std::endl;
}

Dog::Dog(const Dog& ref)
{
	std::cout << "Copy constructor called for Dog"<<std::endl;
	*this = ref;
}

Dog::~Dog(void)
{
	std::cout << "Destructor called for Dog"<<std::endl;
}

Dog& Dog::operator=(const Dog& ref)
{
	std::cout << "Copy assignment operator called for Dog"<<std::endl;
	if (&ref != this) {
		this->_type = ref._type;
	}
	return *this;
}

void Dog::makeSound() const {
    std::cout << "Woof!" << std::endl;
}
