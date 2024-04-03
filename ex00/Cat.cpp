/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:54:23 by mburgler          #+#    #+#             */
/*   Updated: 2024/04/01 18:07:12 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Default Constructor called for Cat" << std::endl;
}

Cat::Cat(const Cat& ref)
{
	std::cout << "Copy constructor called for Cat"<<std::endl;
	*this = ref;
}

Cat::~Cat(void)
{
	std::cout << "Destructor called for Cat"<<std::endl;
}

Cat& Cat::operator=(const Cat& ref)
{
	std::cout << "Copy assignment operator called for Cat"<<std::endl;
	if (&ref != this) {
		this->_type = ref._type;
	}
	return *this;
}

void Cat::makeSound() const {
    std::cout << "Raaaawwwrrr!" << std::endl;
}
